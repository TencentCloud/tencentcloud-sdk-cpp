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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TKENAMESPACEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TKENAMESPACEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/TkeSecretDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * tke namespace详情
                */
                class TkeNameSpaceDetail : public AbstractModel
                {
                public:
                    TkeNameSpaceDetail();
                    ~TkeNameSpaceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取namespace名称
                     * @return Name namespace名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置namespace名称
                     * @param _name namespace名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取secret列表
                     * @return SecretList secret列表
                     * 
                     */
                    std::vector<TkeSecretDetail> GetSecretList() const;

                    /**
                     * 设置secret列表
                     * @param _secretList secret列表
                     * 
                     */
                    void SetSecretList(const std::vector<TkeSecretDetail>& _secretList);

                    /**
                     * 判断参数 SecretList 是否已赋值
                     * @return SecretList 是否已赋值
                     * 
                     */
                    bool SecretListHasBeenSet() const;

                private:

                    /**
                     * namespace名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * secret列表
                     */
                    std::vector<TkeSecretDetail> m_secretList;
                    bool m_secretListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TKENAMESPACEDETAIL_H_
