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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTJS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTJS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AlgDetectResult.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot主动特征识别客户端行为校验。
                */
                class AlgDetectJS : public AbstractModel
                {
                public:
                    AlgDetectJS();
                    ~AlgDetectJS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作名称。
                     * @return Name 操作名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置操作名称。
                     * @param _name 操作名称。
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
                     * 获取工作量证明 (proof_Of-Work)校验强度，默认low，取值有：
<li>low：低；</li>
<li>middle：中；</li>
<li>high：高。</li>
                     * @return WorkLevel 工作量证明 (proof_Of-Work)校验强度，默认low，取值有：
<li>low：低；</li>
<li>middle：中；</li>
<li>high：高。</li>
                     * 
                     */
                    std::string GetWorkLevel() const;

                    /**
                     * 设置工作量证明 (proof_Of-Work)校验强度，默认low，取值有：
<li>low：低；</li>
<li>middle：中；</li>
<li>high：高。</li>
                     * @param _workLevel 工作量证明 (proof_Of-Work)校验强度，默认low，取值有：
<li>low：低；</li>
<li>middle：中；</li>
<li>high：高。</li>
                     * 
                     */
                    void SetWorkLevel(const std::string& _workLevel);

                    /**
                     * 判断参数 WorkLevel 是否已赋值
                     * @return WorkLevel 是否已赋值
                     * 
                     */
                    bool WorkLevelHasBeenSet() const;

                    /**
                     * 获取执行方式，js延迟执行的时间。单位为ms，默认500，取值：0～1000。
                     * @return ExecuteMode 执行方式，js延迟执行的时间。单位为ms，默认500，取值：0～1000。
                     * 
                     */
                    int64_t GetExecuteMode() const;

                    /**
                     * 设置执行方式，js延迟执行的时间。单位为ms，默认500，取值：0～1000。
                     * @param _executeMode 执行方式，js延迟执行的时间。单位为ms，默认500，取值：0～1000。
                     * 
                     */
                    void SetExecuteMode(const int64_t& _executeMode);

                    /**
                     * 判断参数 ExecuteMode 是否已赋值
                     * @return ExecuteMode 是否已赋值
                     * 
                     */
                    bool ExecuteModeHasBeenSet() const;

                    /**
                     * 获取客户端末启用JS（末完成检测）统计周期。单位为秒，默认10，取值：5～3600。
                     * @return InvalidStatTime 客户端末启用JS（末完成检测）统计周期。单位为秒，默认10，取值：5～3600。
                     * 
                     */
                    int64_t GetInvalidStatTime() const;

                    /**
                     * 设置客户端末启用JS（末完成检测）统计周期。单位为秒，默认10，取值：5～3600。
                     * @param _invalidStatTime 客户端末启用JS（末完成检测）统计周期。单位为秒，默认10，取值：5～3600。
                     * 
                     */
                    void SetInvalidStatTime(const int64_t& _invalidStatTime);

                    /**
                     * 判断参数 InvalidStatTime 是否已赋值
                     * @return InvalidStatTime 是否已赋值
                     * 
                     */
                    bool InvalidStatTimeHasBeenSet() const;

                    /**
                     * 获取客户端末启用JS（末完成检测）触发阈值。单位为次，默认300，取值：1～100000000。
                     * @return InvalidThreshold 客户端末启用JS（末完成检测）触发阈值。单位为次，默认300，取值：1～100000000。
                     * 
                     */
                    int64_t GetInvalidThreshold() const;

                    /**
                     * 设置客户端末启用JS（末完成检测）触发阈值。单位为次，默认300，取值：1～100000000。
                     * @param _invalidThreshold 客户端末启用JS（末完成检测）触发阈值。单位为次，默认300，取值：1～100000000。
                     * 
                     */
                    void SetInvalidThreshold(const int64_t& _invalidThreshold);

                    /**
                     * 判断参数 InvalidThreshold 是否已赋值
                     * @return InvalidThreshold 是否已赋值
                     * 
                     */
                    bool InvalidThresholdHasBeenSet() const;

                    /**
                     * 获取Bot主动特征识别客户端行为校验结果。
                     * @return AlgDetectResults Bot主动特征识别客户端行为校验结果。
                     * 
                     */
                    std::vector<AlgDetectResult> GetAlgDetectResults() const;

                    /**
                     * 设置Bot主动特征识别客户端行为校验结果。
                     * @param _algDetectResults Bot主动特征识别客户端行为校验结果。
                     * 
                     */
                    void SetAlgDetectResults(const std::vector<AlgDetectResult>& _algDetectResults);

                    /**
                     * 判断参数 AlgDetectResults 是否已赋值
                     * @return AlgDetectResults 是否已赋值
                     * 
                     */
                    bool AlgDetectResultsHasBeenSet() const;

                private:

                    /**
                     * 操作名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 工作量证明 (proof_Of-Work)校验强度，默认low，取值有：
<li>low：低；</li>
<li>middle：中；</li>
<li>high：高。</li>
                     */
                    std::string m_workLevel;
                    bool m_workLevelHasBeenSet;

                    /**
                     * 执行方式，js延迟执行的时间。单位为ms，默认500，取值：0～1000。
                     */
                    int64_t m_executeMode;
                    bool m_executeModeHasBeenSet;

                    /**
                     * 客户端末启用JS（末完成检测）统计周期。单位为秒，默认10，取值：5～3600。
                     */
                    int64_t m_invalidStatTime;
                    bool m_invalidStatTimeHasBeenSet;

                    /**
                     * 客户端末启用JS（末完成检测）触发阈值。单位为次，默认300，取值：1～100000000。
                     */
                    int64_t m_invalidThreshold;
                    bool m_invalidThresholdHasBeenSet;

                    /**
                     * Bot主动特征识别客户端行为校验结果。
                     */
                    std::vector<AlgDetectResult> m_algDetectResults;
                    bool m_algDetectResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTJS_H_
