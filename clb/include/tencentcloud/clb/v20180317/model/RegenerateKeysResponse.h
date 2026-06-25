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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REGENERATEKEYSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REGENERATEKEYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RegeneratedKey.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * RegenerateKeys返回参数结构体
                */
                class RegenerateKeysResponse : public AbstractModel
                {
                public:
                    RegenerateKeysResponse();
                    ~RegenerateKeysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>重新生成后的Key的信息</p>
                     * @return RegeneratedKeys <p>重新生成后的Key的信息</p>
                     * 
                     */
                    std::vector<RegeneratedKey> GetRegeneratedKeys() const;

                    /**
                     * 判断参数 RegeneratedKeys 是否已赋值
                     * @return RegeneratedKeys 是否已赋值
                     * 
                     */
                    bool RegeneratedKeysHasBeenSet() const;

                    /**
                     * 获取<p>重新生成失败的Key的ID列表</p>
                     * @return FailedKeyIds <p>重新生成失败的Key的ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetFailedKeyIds() const;

                    /**
                     * 判断参数 FailedKeyIds 是否已赋值
                     * @return FailedKeyIds 是否已赋值
                     * 
                     */
                    bool FailedKeyIdsHasBeenSet() const;

                private:

                    /**
                     * <p>重新生成后的Key的信息</p>
                     */
                    std::vector<RegeneratedKey> m_regeneratedKeys;
                    bool m_regeneratedKeysHasBeenSet;

                    /**
                     * <p>重新生成失败的Key的ID列表</p>
                     */
                    std::vector<std::string> m_failedKeyIds;
                    bool m_failedKeyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REGENERATEKEYSRESPONSE_H_
