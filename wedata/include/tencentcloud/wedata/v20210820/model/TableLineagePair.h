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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLELINEAGEPAIR_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLELINEAGEPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableLineage.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 表血缘关系对
                */
                class TableLineagePair : public AbstractModel
                {
                public:
                    TableLineagePair();
                    ~TableLineagePair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取血缘数据来源表
                     * @return Sources 血缘数据来源表
                     * 
                     */
                    std::vector<TableLineage> GetSources() const;

                    /**
                     * 设置血缘数据来源表
                     * @param _sources 血缘数据来源表
                     * 
                     */
                    void SetSources(const std::vector<TableLineage>& _sources);

                    /**
                     * 判断参数 Sources 是否已赋值
                     * @return Sources 是否已赋值
                     * 
                     */
                    bool SourcesHasBeenSet() const;

                    /**
                     * 获取血缘数据目标表
                     * @return Target 血缘数据目标表
                     * 
                     */
                    TableLineage GetTarget() const;

                    /**
                     * 设置血缘数据目标表
                     * @param _target 血缘数据目标表
                     * 
                     */
                    void SetTarget(const TableLineage& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                private:

                    /**
                     * 血缘数据来源表
                     */
                    std::vector<TableLineage> m_sources;
                    bool m_sourcesHasBeenSet;

                    /**
                     * 血缘数据目标表
                     */
                    TableLineage m_target;
                    bool m_targetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLELINEAGEPAIR_H_
