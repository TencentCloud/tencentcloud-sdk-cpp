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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CLSLOGITEM_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CLSLOGITEM_H_

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
        namespace V20210408
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
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取请求ID
                     * @return RequestId 请求ID
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置请求ID
                     * @param _requestId 请求ID
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

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
                     * @deprecated
                     */
                    std::string GetUserid() const;

                    /**
                     * 设置腾讯云账号
                     * @param _userid 腾讯云账号
                     * @deprecated
                     */
                    void SetUserid(const std::string& _userid);

                    /**
                     * 判断参数 Userid 是否已赋值
                     * @return Userid 是否已赋值
                     * @deprecated
                     */
                    bool UseridHasBeenSet() const;

                    /**
                     * 获取腾讯云账号
                     * @return UserId 腾讯云账号
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置腾讯云账号
                     * @param _userId 腾讯云账号
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 日志内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 请求ID
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

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

                    /**
                     * 腾讯云账号
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CLSLOGITEM_H_
