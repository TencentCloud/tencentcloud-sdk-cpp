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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENBASELINEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENBASELINEINFO_H_

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
                * 大屏基线信息
                */
                class ScreenBaselineInfo : public AbstractModel
                {
                public:
                    ScreenBaselineInfo();
                    ~ScreenBaselineInfo() = default;
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

                    /**
                     * 获取主机uuid
                     * @return Uuid 主机uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机uuid
                     * @param _uuid 主机uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

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
                     * 基线风险项
                     */
                    uint64_t m_baselineFailCount;
                    bool m_baselineFailCountHasBeenSet;

                    /**
                     * 主机uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENBASELINEINFO_H_
