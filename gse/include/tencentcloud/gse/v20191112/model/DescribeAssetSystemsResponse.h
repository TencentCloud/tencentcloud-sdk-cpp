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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEASSETSYSTEMSRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEASSETSYSTEMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/AssetSupportSys.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeAssetSystems返回参数结构体
                */
                class DescribeAssetSystemsResponse : public AbstractModel
                {
                public:
                    DescribeAssetSystemsResponse();
                    ~DescribeAssetSystemsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取生成包支持的操作系统类型列表
                     * @return AssetSupportSys 生成包支持的操作系统类型列表
                     * 
                     */
                    std::vector<AssetSupportSys> GetAssetSupportSys() const;

                    /**
                     * 判断参数 AssetSupportSys 是否已赋值
                     * @return AssetSupportSys 是否已赋值
                     * 
                     */
                    bool AssetSupportSysHasBeenSet() const;

                private:

                    /**
                     * 生成包支持的操作系统类型列表
                     */
                    std::vector<AssetSupportSys> m_assetSupportSys;
                    bool m_assetSupportSysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEASSETSYSTEMSRESPONSE_H_
