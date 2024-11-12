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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEOVERVIEW_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 漏洞防御趋势页，包括插件状态及攻防趋势，趋势由三个长度相同，元素一一对应的数组保存，如果某天没有数据将会缺失
                */
                class VulDefenceOverview : public AbstractModel
                {
                public:
                    VulDefenceOverview();
                    ~VulDefenceOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取防御开关：0 关闭 1 开启
                     * @return Enable 防御开关：0 关闭 1 开启
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置防御开关：0 关闭 1 开启
                     * @param _enable 防御开关：0 关闭 1 开启
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取已开启防御主机数
                     * @return DefendHostCount 已开启防御主机数
                     * 
                     */
                    int64_t GetDefendHostCount() const;

                    /**
                     * 设置已开启防御主机数
                     * @param _defendHostCount 已开启防御主机数
                     * 
                     */
                    void SetDefendHostCount(const int64_t& _defendHostCount);

                    /**
                     * 判断参数 DefendHostCount 是否已赋值
                     * @return DefendHostCount 是否已赋值
                     * 
                     */
                    bool DefendHostCountHasBeenSet() const;

                    /**
                     * 获取插件异常数
                     * @return ExceptionCount 插件异常数
                     * 
                     */
                    int64_t GetExceptionCount() const;

                    /**
                     * 设置插件异常数
                     * @param _exceptionCount 插件异常数
                     * 
                     */
                    void SetExceptionCount(const int64_t& _exceptionCount);

                    /**
                     * 判断参数 ExceptionCount 是否已赋值
                     * @return ExceptionCount 是否已赋值
                     * 
                     */
                    bool ExceptionCountHasBeenSet() const;

                    /**
                     * 获取每日攻击趋势
                     * @return AttackCounts 每日攻击趋势
                     * 
                     */
                    std::vector<int64_t> GetAttackCounts() const;

                    /**
                     * 设置每日攻击趋势
                     * @param _attackCounts 每日攻击趋势
                     * 
                     */
                    void SetAttackCounts(const std::vector<int64_t>& _attackCounts);

                    /**
                     * 判断参数 AttackCounts 是否已赋值
                     * @return AttackCounts 是否已赋值
                     * 
                     */
                    bool AttackCountsHasBeenSet() const;

                    /**
                     * 获取每日防御趋势
                     * @return DefendCounts 每日防御趋势
                     * 
                     */
                    std::vector<int64_t> GetDefendCounts() const;

                    /**
                     * 设置每日防御趋势
                     * @param _defendCounts 每日防御趋势
                     * 
                     */
                    void SetDefendCounts(const std::vector<int64_t>& _defendCounts);

                    /**
                     * 判断参数 DefendCounts 是否已赋值
                     * @return DefendCounts 是否已赋值
                     * 
                     */
                    bool DefendCountsHasBeenSet() const;

                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::vector<std::string> GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
                     * 
                     */
                    void SetDate(const std::vector<std::string>& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * 防御开关：0 关闭 1 开启
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 已开启防御主机数
                     */
                    int64_t m_defendHostCount;
                    bool m_defendHostCountHasBeenSet;

                    /**
                     * 插件异常数
                     */
                    int64_t m_exceptionCount;
                    bool m_exceptionCountHasBeenSet;

                    /**
                     * 每日攻击趋势
                     */
                    std::vector<int64_t> m_attackCounts;
                    bool m_attackCountsHasBeenSet;

                    /**
                     * 每日防御趋势
                     */
                    std::vector<int64_t> m_defendCounts;
                    bool m_defendCountsHasBeenSet;

                    /**
                     * 日期
                     */
                    std::vector<std::string> m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEOVERVIEW_H_
