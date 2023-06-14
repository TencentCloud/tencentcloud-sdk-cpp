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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTKEYALIASBYREGIONRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTKEYALIASBYREGIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/KeyMetadata.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * ListKeyAliasByRegion返回参数结构体
                */
                class ListKeyAliasByRegionResponse : public AbstractModel
                {
                public:
                    ListKeyAliasByRegionResponse();
                    ~ListKeyAliasByRegionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CMK的总数量
                     * @return TotalCount CMK的总数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取密钥别名
                     * @return KeyMetadatas 密钥别名
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
                     * CMK的总数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 密钥别名
                     */
                    std::vector<KeyMetadata> m_keyMetadatas;
                    bool m_keyMetadatasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTKEYALIASBYREGIONRESPONSE_H_
