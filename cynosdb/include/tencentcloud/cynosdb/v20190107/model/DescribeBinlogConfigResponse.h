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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBINLOGCONFIGRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBINLOGCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BinlogConfigInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBinlogConfig返回参数结构体
                */
                class DescribeBinlogConfigResponse : public AbstractModel
                {
                public:
                    DescribeBinlogConfigResponse();
                    ~DescribeBinlogConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Binlog跨地域配置更新时间
                     * @return BinlogCrossRegionsConfigUpdateTime Binlog跨地域配置更新时间
                     * 
                     */
                    std::string GetBinlogCrossRegionsConfigUpdateTime() const;

                    /**
                     * 判断参数 BinlogCrossRegionsConfigUpdateTime 是否已赋值
                     * @return BinlogCrossRegionsConfigUpdateTime 是否已赋值
                     * 
                     */
                    bool BinlogCrossRegionsConfigUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Binlog配置信息
                     * @return BinlogConfig Binlog配置信息
                     * 
                     */
                    BinlogConfigInfo GetBinlogConfig() const;

                    /**
                     * 判断参数 BinlogConfig 是否已赋值
                     * @return BinlogConfig 是否已赋值
                     * 
                     */
                    bool BinlogConfigHasBeenSet() const;

                private:

                    /**
                     * Binlog跨地域配置更新时间
                     */
                    std::string m_binlogCrossRegionsConfigUpdateTime;
                    bool m_binlogCrossRegionsConfigUpdateTimeHasBeenSet;

                    /**
                     * Binlog配置信息
                     */
                    BinlogConfigInfo m_binlogConfig;
                    bool m_binlogConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBINLOGCONFIGRESPONSE_H_
