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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_UPDATEDATAKEYNAMEREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_UPDATEDATAKEYNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * UpdateDataKeyName请求参数结构体
                */
                class UpdateDataKeyNameRequest : public AbstractModel
                {
                public:
                    UpdateDataKeyNameRequest();
                    ~UpdateDataKeyNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据密钥的唯一标志符
                     * @return DataKeyId 数据密钥的唯一标志符
                     * 
                     */
                    std::string GetDataKeyId() const;

                    /**
                     * 设置数据密钥的唯一标志符
                     * @param _dataKeyId 数据密钥的唯一标志符
                     * 
                     */
                    void SetDataKeyId(const std::string& _dataKeyId);

                    /**
                     * 判断参数 DataKeyId 是否已赋值
                     * @return DataKeyId 是否已赋值
                     * 
                     */
                    bool DataKeyIdHasBeenSet() const;

                    /**
                     * 获取数据密钥的名称
                     * @return DataKeyName 数据密钥的名称
                     * 
                     */
                    std::string GetDataKeyName() const;

                    /**
                     * 设置数据密钥的名称
                     * @param _dataKeyName 数据密钥的名称
                     * 
                     */
                    void SetDataKeyName(const std::string& _dataKeyName);

                    /**
                     * 判断参数 DataKeyName 是否已赋值
                     * @return DataKeyName 是否已赋值
                     * 
                     */
                    bool DataKeyNameHasBeenSet() const;

                private:

                    /**
                     * 数据密钥的唯一标志符
                     */
                    std::string m_dataKeyId;
                    bool m_dataKeyIdHasBeenSet;

                    /**
                     * 数据密钥的名称
                     */
                    std::string m_dataKeyName;
                    bool m_dataKeyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_UPDATEDATAKEYNAMEREQUEST_H_
