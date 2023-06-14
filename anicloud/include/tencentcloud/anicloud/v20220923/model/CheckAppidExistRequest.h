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

#ifndef TENCENTCLOUD_ANICLOUD_V20220923_MODEL_CHECKAPPIDEXISTREQUEST_H_
#define TENCENTCLOUD_ANICLOUD_V20220923_MODEL_CHECKAPPIDEXISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Anicloud
    {
        namespace V20220923
        {
            namespace Model
            {
                /**
                * CheckAppidExist请求参数结构体
                */
                class CheckAppidExistRequest : public AbstractModel
                {
                public:
                    CheckAppidExistRequest();
                    ~CheckAppidExistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务的appid
                     * @return SDKAppid 业务的appid
                     * 
                     */
                    std::string GetSDKAppid() const;

                    /**
                     * 设置业务的appid
                     * @param _sDKAppid 业务的appid
                     * 
                     */
                    void SetSDKAppid(const std::string& _sDKAppid);

                    /**
                     * 判断参数 SDKAppid 是否已赋值
                     * @return SDKAppid 是否已赋值
                     * 
                     */
                    bool SDKAppidHasBeenSet() const;

                    /**
                     * 获取sub product code
                     * @return Type sub product code
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置sub product code
                     * @param _type sub product code
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 业务的appid
                     */
                    std::string m_sDKAppid;
                    bool m_sDKAppidHasBeenSet;

                    /**
                     * sub product code
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANICLOUD_V20220923_MODEL_CHECKAPPIDEXISTREQUEST_H_
