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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEDETAILS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEDETAILS_H_

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
                * 校验得出的不一致详情
                */
                class DifferenceDetails : public AbstractModel
                {
                public:
                    DifferenceDetails();
                    ~DifferenceDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取校验结果
                     * @return Result 校验结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置校验结果
                     * @param _result 校验结果
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取源库gtid set
                     * @return SrcGtidSets 源库gtid set
                     * 
                     */
                    std::string GetSrcGtidSets() const;

                    /**
                     * 设置源库gtid set
                     * @param _srcGtidSets 源库gtid set
                     * 
                     */
                    void SetSrcGtidSets(const std::string& _srcGtidSets);

                    /**
                     * 判断参数 SrcGtidSets 是否已赋值
                     * @return SrcGtidSets 是否已赋值
                     * 
                     */
                    bool SrcGtidSetsHasBeenSet() const;

                    /**
                     * 获取目标库gtid set
                     * @return DstGtidSets 目标库gtid set
                     * 
                     */
                    std::string GetDstGtidSets() const;

                    /**
                     * 设置目标库gtid set
                     * @param _dstGtidSets 目标库gtid set
                     * 
                     */
                    void SetDstGtidSets(const std::string& _dstGtidSets);

                    /**
                     * 判断参数 DstGtidSets 是否已赋值
                     * @return DstGtidSets 是否已赋值
                     * 
                     */
                    bool DstGtidSetsHasBeenSet() const;

                    /**
                     * 获取源库差异的gtid set
                     * @return DiffSrc 源库差异的gtid set
                     * 
                     */
                    std::string GetDiffSrc() const;

                    /**
                     * 设置源库差异的gtid set
                     * @param _diffSrc 源库差异的gtid set
                     * 
                     */
                    void SetDiffSrc(const std::string& _diffSrc);

                    /**
                     * 判断参数 DiffSrc 是否已赋值
                     * @return DiffSrc 是否已赋值
                     * 
                     */
                    bool DiffSrcHasBeenSet() const;

                    /**
                     * 获取源库中不一致的表
                     * @return DiffSrcTables 源库中不一致的表
                     * 
                     */
                    std::vector<std::string> GetDiffSrcTables() const;

                    /**
                     * 设置源库中不一致的表
                     * @param _diffSrcTables 源库中不一致的表
                     * 
                     */
                    void SetDiffSrcTables(const std::vector<std::string>& _diffSrcTables);

                    /**
                     * 判断参数 DiffSrcTables 是否已赋值
                     * @return DiffSrcTables 是否已赋值
                     * 
                     */
                    bool DiffSrcTablesHasBeenSet() const;

                    /**
                     * 获取目标库差异的gtid set
                     * @return DiffDst 目标库差异的gtid set
                     * 
                     */
                    std::string GetDiffDst() const;

                    /**
                     * 设置目标库差异的gtid set
                     * @param _diffDst 目标库差异的gtid set
                     * 
                     */
                    void SetDiffDst(const std::string& _diffDst);

                    /**
                     * 判断参数 DiffDst 是否已赋值
                     * @return DiffDst 是否已赋值
                     * 
                     */
                    bool DiffDstHasBeenSet() const;

                    /**
                     * 获取校验结束时间
                     * @return CompareTimestamp 校验结束时间
                     * 
                     */
                    std::string GetCompareTimestamp() const;

                    /**
                     * 设置校验结束时间
                     * @param _compareTimestamp 校验结束时间
                     * 
                     */
                    void SetCompareTimestamp(const std::string& _compareTimestamp);

                    /**
                     * 判断参数 CompareTimestamp 是否已赋值
                     * @return CompareTimestamp 是否已赋值
                     * 
                     */
                    bool CompareTimestampHasBeenSet() const;

                    /**
                     * 获取同步范围内的不一致表
                     * @return DiffSrcTablesNeedSync 同步范围内的不一致表
                     * 
                     */
                    std::vector<std::string> GetDiffSrcTablesNeedSync() const;

                    /**
                     * 设置同步范围内的不一致表
                     * @param _diffSrcTablesNeedSync 同步范围内的不一致表
                     * 
                     */
                    void SetDiffSrcTablesNeedSync(const std::vector<std::string>& _diffSrcTablesNeedSync);

                    /**
                     * 判断参数 DiffSrcTablesNeedSync 是否已赋值
                     * @return DiffSrcTablesNeedSync 是否已赋值
                     * 
                     */
                    bool DiffSrcTablesNeedSyncHasBeenSet() const;

                    /**
                     * 获取同步范围内是否存在不一致的表
                     * @return DiffSrcIsNeedSync 同步范围内是否存在不一致的表
                     * 
                     */
                    bool GetDiffSrcIsNeedSync() const;

                    /**
                     * 设置同步范围内是否存在不一致的表
                     * @param _diffSrcIsNeedSync 同步范围内是否存在不一致的表
                     * 
                     */
                    void SetDiffSrcIsNeedSync(const bool& _diffSrcIsNeedSync);

                    /**
                     * 判断参数 DiffSrcIsNeedSync 是否已赋值
                     * @return DiffSrcIsNeedSync 是否已赋值
                     * 
                     */
                    bool DiffSrcIsNeedSyncHasBeenSet() const;

                private:

                    /**
                     * 校验结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 源库gtid set
                     */
                    std::string m_srcGtidSets;
                    bool m_srcGtidSetsHasBeenSet;

                    /**
                     * 目标库gtid set
                     */
                    std::string m_dstGtidSets;
                    bool m_dstGtidSetsHasBeenSet;

                    /**
                     * 源库差异的gtid set
                     */
                    std::string m_diffSrc;
                    bool m_diffSrcHasBeenSet;

                    /**
                     * 源库中不一致的表
                     */
                    std::vector<std::string> m_diffSrcTables;
                    bool m_diffSrcTablesHasBeenSet;

                    /**
                     * 目标库差异的gtid set
                     */
                    std::string m_diffDst;
                    bool m_diffDstHasBeenSet;

                    /**
                     * 校验结束时间
                     */
                    std::string m_compareTimestamp;
                    bool m_compareTimestampHasBeenSet;

                    /**
                     * 同步范围内的不一致表
                     */
                    std::vector<std::string> m_diffSrcTablesNeedSync;
                    bool m_diffSrcTablesNeedSyncHasBeenSet;

                    /**
                     * 同步范围内是否存在不一致的表
                     */
                    bool m_diffSrcIsNeedSync;
                    bool m_diffSrcIsNeedSyncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEDETAILS_H_
