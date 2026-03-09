/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEAPPLICATIONKEYREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEAPPLICATIONKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * UpdateApplicationKey请求参数结构体
                */
                class UpdateApplicationKeyRequest : public AbstractModel
                {
                public:
                    UpdateApplicationKeyRequest();
                    ~UpdateApplicationKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用的base64密钥字符串
                     * @return MpApplicationKey 应用的base64密钥字符串
                     * 
                     */
                    std::string GetMpApplicationKey() const;

                    /**
                     * 设置应用的base64密钥字符串
                     * @param _mpApplicationKey 应用的base64密钥字符串
                     * 
                     */
                    void SetMpApplicationKey(const std::string& _mpApplicationKey);

                    /**
                     * 判断参数 MpApplicationKey 是否已赋值
                     * @return MpApplicationKey 是否已赋值
                     * 
                     */
                    bool MpApplicationKeyHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return MpApplicationId 应用ID
                     * 
                     */
                    std::string GetMpApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _mpApplicationId 应用ID
                     * 
                     */
                    void SetMpApplicationId(const std::string& _mpApplicationId);

                    /**
                     * 判断参数 MpApplicationId 是否已赋值
                     * @return MpApplicationId 是否已赋值
                     * 
                     */
                    bool MpApplicationIdHasBeenSet() const;

                private:

                    /**
                     * 应用的base64密钥字符串
                     */
                    std::string m_mpApplicationKey;
                    bool m_mpApplicationKeyHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_mpApplicationId;
                    bool m_mpApplicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEAPPLICATIONKEYREQUEST_H_
