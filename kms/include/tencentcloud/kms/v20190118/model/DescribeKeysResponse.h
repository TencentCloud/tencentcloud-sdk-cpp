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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEKEYSRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEKEYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/KeyMetadata.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * DescribeKeys返回参数结构体
                */
                class DescribeKeysResponse : public AbstractModel
                {
                public:
                    DescribeKeysResponse();
                    ~DescribeKeysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的属性信息列表
                     * @return KeyMetadatas 返回的属性信息列表
                     * 
                     */
                    std::vector<KeyMetadata> GetKeyMetadatas() const;

                    /**
                     * 判断参数 KeyMetadatas 是否已赋值
                     * @return KeyMetadatas 是否已赋值
                     * 
                     */
                    bool KeyMetadatasHasBeenSet() const;

                private:

                    /**
                     * 返回的属性信息列表
                     */
                    std::vector<KeyMetadata> m_keyMetadatas;
                    bool m_keyMetadatasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEKEYSRESPONSE_H_
