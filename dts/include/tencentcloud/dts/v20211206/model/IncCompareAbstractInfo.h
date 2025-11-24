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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_INCCOMPAREABSTRACTINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_INCCOMPAREABSTRACTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 增量校验阶段的摘要信息
                */
                class IncCompareAbstractInfo : public AbstractModel
                {
                public:
                    IncCompareAbstractInfo();
                    ~IncCompareAbstractInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取增量起始位点
                     * @return StartPosition 增量起始位点
                     * 
                     */
                    std::string GetStartPosition() const;

                    /**
                     * 设置增量起始位点
                     * @param _startPosition 增量起始位点
                     * 
                     */
                    void SetStartPosition(const std::string& _startPosition);

                    /**
                     * 判断参数 StartPosition 是否已赋值
                     * @return StartPosition 是否已赋值
                     * 
                     */
                    bool StartPositionHasBeenSet() const;

                    /**
                     * 获取增量当前位点
                     * @return CurrentPosition 增量当前位点
                     * 
                     */
                    std::string GetCurrentPosition() const;

                    /**
                     * 设置增量当前位点
                     * @param _currentPosition 增量当前位点
                     * 
                     */
                    void SetCurrentPosition(const std::string& _currentPosition);

                    /**
                     * 判断参数 CurrentPosition 是否已赋值
                     * @return CurrentPosition 是否已赋值
                     * 
                     */
                    bool CurrentPositionHasBeenSet() const;

                    /**
                     * 获取已校验行数
                     * @return CheckedRecord 已校验行数
                     * 
                     */
                    uint64_t GetCheckedRecord() const;

                    /**
                     * 设置已校验行数
                     * @param _checkedRecord 已校验行数
                     * 
                     */
                    void SetCheckedRecord(const uint64_t& _checkedRecord);

                    /**
                     * 判断参数 CheckedRecord 是否已赋值
                     * @return CheckedRecord 是否已赋值
                     * 
                     */
                    bool CheckedRecordHasBeenSet() const;

                    /**
                     * 获取不一致行数
                     * @return DiffRecord 不一致行数
                     * 
                     */
                    uint64_t GetDiffRecord() const;

                    /**
                     * 设置不一致行数
                     * @param _diffRecord 不一致行数
                     * 
                     */
                    void SetDiffRecord(const uint64_t& _diffRecord);

                    /**
                     * 判断参数 DiffRecord 是否已赋值
                     * @return DiffRecord 是否已赋值
                     * 
                     */
                    bool DiffRecordHasBeenSet() const;

                    /**
                     * 获取不一致表的数量
                     * @return DiffTable 不一致表的数量
                     * 
                     */
                    uint64_t GetDiffTable() const;

                    /**
                     * 设置不一致表的数量
                     * @param _diffTable 不一致表的数量
                     * 
                     */
                    void SetDiffTable(const uint64_t& _diffTable);

                    /**
                     * 判断参数 DiffTable 是否已赋值
                     * @return DiffTable 是否已赋值
                     * 
                     */
                    bool DiffTableHasBeenSet() const;

                private:

                    /**
                     * 增量起始位点
                     */
                    std::string m_startPosition;
                    bool m_startPositionHasBeenSet;

                    /**
                     * 增量当前位点
                     */
                    std::string m_currentPosition;
                    bool m_currentPositionHasBeenSet;

                    /**
                     * 已校验行数
                     */
                    uint64_t m_checkedRecord;
                    bool m_checkedRecordHasBeenSet;

                    /**
                     * 不一致行数
                     */
                    uint64_t m_diffRecord;
                    bool m_diffRecordHasBeenSet;

                    /**
                     * 不一致表的数量
                     */
                    uint64_t m_diffTable;
                    bool m_diffTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_INCCOMPAREABSTRACTINFO_H_
