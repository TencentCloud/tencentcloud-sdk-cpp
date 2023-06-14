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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_SIGNLOCATION_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_SIGNLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
        {
            namespace Model
            {
                /**
                * 签署坐标对象
                */
                class SignLocation : public AbstractModel
                {
                public:
                    SignLocation();
                    ~SignLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签名域页数
                     * @return SignOnPage 签名域页数
                     * 
                     */
                    std::string GetSignOnPage() const;

                    /**
                     * 设置签名域页数
                     * @param _signOnPage 签名域页数
                     * 
                     */
                    void SetSignOnPage(const std::string& _signOnPage);

                    /**
                     * 判断参数 SignOnPage 是否已赋值
                     * @return SignOnPage 是否已赋值
                     * 
                     */
                    bool SignOnPageHasBeenSet() const;

                    /**
                     * 获取签名域左下角X轴坐标轴
                     * @return SignLocationLBX 签名域左下角X轴坐标轴
                     * 
                     */
                    std::string GetSignLocationLBX() const;

                    /**
                     * 设置签名域左下角X轴坐标轴
                     * @param _signLocationLBX 签名域左下角X轴坐标轴
                     * 
                     */
                    void SetSignLocationLBX(const std::string& _signLocationLBX);

                    /**
                     * 判断参数 SignLocationLBX 是否已赋值
                     * @return SignLocationLBX 是否已赋值
                     * 
                     */
                    bool SignLocationLBXHasBeenSet() const;

                    /**
                     * 获取签名域左下角Y轴坐标轴
                     * @return SignLocationLBY 签名域左下角Y轴坐标轴
                     * 
                     */
                    std::string GetSignLocationLBY() const;

                    /**
                     * 设置签名域左下角Y轴坐标轴
                     * @param _signLocationLBY 签名域左下角Y轴坐标轴
                     * 
                     */
                    void SetSignLocationLBY(const std::string& _signLocationLBY);

                    /**
                     * 判断参数 SignLocationLBY 是否已赋值
                     * @return SignLocationLBY 是否已赋值
                     * 
                     */
                    bool SignLocationLBYHasBeenSet() const;

                    /**
                     * 获取签名域右上角X轴坐标轴
                     * @return SignLocationRUX 签名域右上角X轴坐标轴
                     * 
                     */
                    std::string GetSignLocationRUX() const;

                    /**
                     * 设置签名域右上角X轴坐标轴
                     * @param _signLocationRUX 签名域右上角X轴坐标轴
                     * 
                     */
                    void SetSignLocationRUX(const std::string& _signLocationRUX);

                    /**
                     * 判断参数 SignLocationRUX 是否已赋值
                     * @return SignLocationRUX 是否已赋值
                     * 
                     */
                    bool SignLocationRUXHasBeenSet() const;

                    /**
                     * 获取签名域右上角Y轴坐标轴
                     * @return SignLocationRUY 签名域右上角Y轴坐标轴
                     * 
                     */
                    std::string GetSignLocationRUY() const;

                    /**
                     * 设置签名域右上角Y轴坐标轴
                     * @param _signLocationRUY 签名域右上角Y轴坐标轴
                     * 
                     */
                    void SetSignLocationRUY(const std::string& _signLocationRUY);

                    /**
                     * 判断参数 SignLocationRUY 是否已赋值
                     * @return SignLocationRUY 是否已赋值
                     * 
                     */
                    bool SignLocationRUYHasBeenSet() const;

                private:

                    /**
                     * 签名域页数
                     */
                    std::string m_signOnPage;
                    bool m_signOnPageHasBeenSet;

                    /**
                     * 签名域左下角X轴坐标轴
                     */
                    std::string m_signLocationLBX;
                    bool m_signLocationLBXHasBeenSet;

                    /**
                     * 签名域左下角Y轴坐标轴
                     */
                    std::string m_signLocationLBY;
                    bool m_signLocationLBYHasBeenSet;

                    /**
                     * 签名域右上角X轴坐标轴
                     */
                    std::string m_signLocationRUX;
                    bool m_signLocationRUXHasBeenSet;

                    /**
                     * 签名域右上角Y轴坐标轴
                     */
                    std::string m_signLocationRUY;
                    bool m_signLocationRUYHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_SIGNLOCATION_H_
