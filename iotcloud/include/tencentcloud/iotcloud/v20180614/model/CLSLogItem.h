/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CLSLOGITEM_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CLSLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * CLS日志
                */
                class CLSLogItem : public AbstractModel
                {
                public:
                    CLSLogItem();
                    ~CLSLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志内容
                     * @return Content 日志内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置日志内容
                     * @param _content 日志内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return Devicename 设备名称
                     * 
                     */
                    std::string GetDevicename() const;

                    /**
                     * 设置设备名称
                     * @param _devicename 设备名称
                     * 
                     */
                    void SetDevicename(const std::string& _devicename);

                    /**
                     * 判断参数 Devicename 是否已赋值
                     * @return Devicename 是否已赋值
                     * 
                     */
                    bool DevicenameHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return Productid 产品ID
                     * 
                     */
                    std::string GetProductid() const;

                    /**
                     * 设置产品ID
                     * @param _productid 产品ID
                     * 
                     */
                    void SetProductid(const std::string& _productid);

                    /**
                     * 判断参数 Productid 是否已赋值
                     * @return Productid 是否已赋值
                     * 
                     */
                    bool ProductidHasBeenSet() const;

                    /**
                     * 获取请求ID
                     * @return Requestid 请求ID
                     * 
                     */
                    std::string GetRequestid() const;

                    /**
                     * 设置请求ID
                     * @param _requestid 请求ID
                     * 
                     */
                    void SetRequestid(const std::string& _requestid);

                    /**
                     * 判断参数 Requestid 是否已赋值
                     * @return Requestid 是否已赋值
                     * 
                     */
                    bool RequestidHasBeenSet() const;

                    /**
                     * 获取结果
                     * @return Result 结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置结果
                     * @param _result 结果
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取模块
                     * @return Scene 模块
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置模块
                     * @param _scene 模块
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取日志时间
                     * @return Time 日志时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置日志时间
                     * @param _time 日志时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取腾讯云账号
                     * @return Userid 腾讯云账号
                     * 
                     */
                    std::string GetUserid() const;

                    /**
                     * 设置腾讯云账号
                     * @param _userid 腾讯云账号
                     * 
                     */
                    void SetUserid(const std::string& _userid);

                    /**
                     * 判断参数 Userid 是否已赋值
                     * @return Userid 是否已赋值
                     * 
                     */
                    bool UseridHasBeenSet() const;

                private:

                    /**
                     * 日志内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_devicename;
                    bool m_devicenameHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productid;
                    bool m_productidHasBeenSet;

                    /**
                     * 请求ID
                     */
                    std::string m_requestid;
                    bool m_requestidHasBeenSet;

                    /**
                     * 结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 模块
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 日志时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 腾讯云账号
                     */
                    std::string m_userid;
                    bool m_useridHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CLSLOGITEM_H_
