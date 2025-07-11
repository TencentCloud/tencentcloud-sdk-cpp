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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_INSTANCECONFS_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_INSTANCECONFS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * 实例配置。
                */
                class InstanceConfs : public AbstractModel
                {
                public:
                    InstanceConfs();
                    ~InstanceConfs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库巡检开关, Yes/No。
                     * @return DailyInspection 数据库巡检开关, Yes/No。
                     * 
                     */
                    std::string GetDailyInspection() const;

                    /**
                     * 设置数据库巡检开关, Yes/No。
                     * @param _dailyInspection 数据库巡检开关, Yes/No。
                     * 
                     */
                    void SetDailyInspection(const std::string& _dailyInspection);

                    /**
                     * 判断参数 DailyInspection 是否已赋值
                     * @return DailyInspection 是否已赋值
                     * 
                     */
                    bool DailyInspectionHasBeenSet() const;

                    /**
                     * 获取实例概览开关，Yes/No。
                     * @return OverviewDisplay 实例概览开关，Yes/No。
                     * 
                     */
                    std::string GetOverviewDisplay() const;

                    /**
                     * 设置实例概览开关，Yes/No。
                     * @param _overviewDisplay 实例概览开关，Yes/No。
                     * 
                     */
                    void SetOverviewDisplay(const std::string& _overviewDisplay);

                    /**
                     * 判断参数 OverviewDisplay 是否已赋值
                     * @return OverviewDisplay 是否已赋值
                     * 
                     */
                    bool OverviewDisplayHasBeenSet() const;

                    /**
                     * 获取redis大key分析的自定义分割符，仅redis使用
                     * @return KeyDelimiters redis大key分析的自定义分割符，仅redis使用
                     * 
                     */
                    std::vector<std::string> GetKeyDelimiters() const;

                    /**
                     * 设置redis大key分析的自定义分割符，仅redis使用
                     * @param _keyDelimiters redis大key分析的自定义分割符，仅redis使用
                     * 
                     */
                    void SetKeyDelimiters(const std::vector<std::string>& _keyDelimiters);

                    /**
                     * 判断参数 KeyDelimiters 是否已赋值
                     * @return KeyDelimiters 是否已赋值
                     * 
                     */
                    bool KeyDelimitersHasBeenSet() const;

                private:

                    /**
                     * 数据库巡检开关, Yes/No。
                     */
                    std::string m_dailyInspection;
                    bool m_dailyInspectionHasBeenSet;

                    /**
                     * 实例概览开关，Yes/No。
                     */
                    std::string m_overviewDisplay;
                    bool m_overviewDisplayHasBeenSet;

                    /**
                     * redis大key分析的自定义分割符，仅redis使用
                     */
                    std::vector<std::string> m_keyDelimiters;
                    bool m_keyDelimitersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_INSTANCECONFS_H_
