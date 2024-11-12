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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEINFO_H_

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
                * 基线信息
                */
                class BaselineInfo : public AbstractModel
                {
                public:
                    BaselineInfo();
                    ~BaselineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基线名
                     * @return Name 基线名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置基线名
                     * @param _name 基线名
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
                     * 获取危害等级：1-低危；2-中危；3-高危；4-严重
                     * @return Level 危害等级：1-低危；2-中危；3-高危；4-严重
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置危害等级：1-低危；2-中危；3-高危；4-严重
                     * @param _level 危害等级：1-低危；2-中危；3-高危；4-严重
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取检测项数量
                     * @return RuleCount 检测项数量
                     * 
                     */
                    uint64_t GetRuleCount() const;

                    /**
                     * 设置检测项数量
                     * @param _ruleCount 检测项数量
                     * 
                     */
                    void SetRuleCount(const uint64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取影响服务器数量
                     * @return HostCount 影响服务器数量
                     * 
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置影响服务器数量
                     * @param _hostCount 影响服务器数量
                     * 
                     */
                    void SetHostCount(const uint64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取通过状态:0:未通过,1:已通过
                     * @return Status 通过状态:0:未通过,1:已通过
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置通过状态:0:未通过,1:已通过
                     * @param _status 通过状态:0:未通过,1:已通过
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取基线id
                     * @return CategoryId 基线id
                     * 
                     */
                    uint64_t GetCategoryId() const;

                    /**
                     * 设置基线id
                     * @param _categoryId 基线id
                     * 
                     */
                    void SetCategoryId(const uint64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取最后检测时间
                     * @return LastScanTime 最后检测时间
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最后检测时间
                     * @param _lastScanTime 最后检测时间
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取检测中状态: 5
                     * @return MaxStatus 检测中状态: 5
                     * 
                     */
                    uint64_t GetMaxStatus() const;

                    /**
                     * 设置检测中状态: 5
                     * @param _maxStatus 检测中状态: 5
                     * 
                     */
                    void SetMaxStatus(const uint64_t& _maxStatus);

                    /**
                     * 判断参数 MaxStatus 是否已赋值
                     * @return MaxStatus 是否已赋值
                     * 
                     */
                    bool MaxStatusHasBeenSet() const;

                    /**
                     * 获取基线风险项
                     * @return BaselineFailCount 基线风险项
                     * 
                     */
                    uint64_t GetBaselineFailCount() const;

                    /**
                     * 设置基线风险项
                     * @param _baselineFailCount 基线风险项
                     * 
                     */
                    void SetBaselineFailCount(const uint64_t& _baselineFailCount);

                    /**
                     * 判断参数 BaselineFailCount 是否已赋值
                     * @return BaselineFailCount 是否已赋值
                     * 
                     */
                    bool BaselineFailCountHasBeenSet() const;

                private:

                    /**
                     * 基线名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 危害等级：1-低危；2-中危；3-高危；4-严重
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 检测项数量
                     */
                    uint64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * 影响服务器数量
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 通过状态:0:未通过,1:已通过
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 基线id
                     */
                    uint64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 最后检测时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 检测中状态: 5
                     */
                    uint64_t m_maxStatus;
                    bool m_maxStatusHasBeenSet;

                    /**
                     * 基线风险项
                     */
                    uint64_t m_baselineFailCount;
                    bool m_baselineFailCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEINFO_H_
