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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_CREATEASSETSYNCJOBREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_CREATEASSETSYNCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateAssetSyncJob请求参数结构体
                */
                class CreateAssetSyncJobRequest : public AbstractModel
                {
                public:
                    CreateAssetSyncJobRequest();
                    ~CreateAssetSyncJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取同步资产类别，1 - 主机资产, 2 - 数据库资产
                     * @return Category 同步资产类别，1 - 主机资产, 2 - 数据库资产
                     * 
                     */
                    uint64_t GetCategory() const;

                    /**
                     * 设置同步资产类别，1 - 主机资产, 2 - 数据库资产
                     * @param _category 同步资产类别，1 - 主机资产, 2 - 数据库资产
                     * 
                     */
                    void SetCategory(const uint64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * 同步资产类别，1 - 主机资产, 2 - 数据库资产
                     */
                    uint64_t m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_CREATEASSETSYNCJOBREQUEST_H_
