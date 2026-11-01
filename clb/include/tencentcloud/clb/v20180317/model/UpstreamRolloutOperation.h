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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_UPSTREAMROLLOUTOPERATION_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_UPSTREAMROLLOUTOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * BYOK 上游模型灰度操作。Set 开启灰度或调整同一候选比例，Promote 全量切换，Rollback 结束灰度并恢复主模型。
                */
                class UpstreamRolloutOperation : public AbstractModel
                {
                public:
                    UpstreamRolloutOperation();
                    ~UpstreamRolloutOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>上游模型灰度操作类型。Set：开始灰度或调整同一候选的比例；Promote：全量切换到候选模型并结束灰度；Rollback：保留当前主模型并结束灰度。</p><p>入参限制：仅支持 Set、Promote、Rollback，区分大小写。Promote 和 Rollback 仅允许在灰度中使用，且禁止携带 ModelName、Weight。</p>
                     * @return Operation <p>上游模型灰度操作类型。Set：开始灰度或调整同一候选的比例；Promote：全量切换到候选模型并结束灰度；Rollback：保留当前主模型并结束灰度。</p><p>入参限制：仅支持 Set、Promote、Rollback，区分大小写。Promote 和 Rollback 仅允许在灰度中使用，且禁止携带 ModelName、Weight。</p>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置<p>上游模型灰度操作类型。Set：开始灰度或调整同一候选的比例；Promote：全量切换到候选模型并结束灰度；Rollback：保留当前主模型并结束灰度。</p><p>入参限制：仅支持 Set、Promote、Rollback，区分大小写。Promote 和 Rollback 仅允许在灰度中使用，且禁止携带 ModelName、Weight。</p>
                     * @param _operation <p>上游模型灰度操作类型。Set：开始灰度或调整同一候选的比例；Promote：全量切换到候选模型并结束灰度；Rollback：保留当前主模型并结束灰度。</p><p>入参限制：仅支持 Set、Promote、Rollback，区分大小写。Promote 和 Rollback 仅允许在灰度中使用，且禁止携带 ModelName、Weight。</p>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取<p>候选上游模型的原始名称，保留名称中的斜杠。</p><p>入参限制：Operation 为 Set 时必填，非空且最长 128 个字符；不能与当前主模型相同，不能占用同一 BYOK 的其他主模型或有效灰度候选名称。Promote、Rollback 禁止传入。</p>
                     * @return ModelName <p>候选上游模型的原始名称，保留名称中的斜杠。</p><p>入参限制：Operation 为 Set 时必填，非空且最长 128 个字符；不能与当前主模型相同，不能占用同一 BYOK 的其他主模型或有效灰度候选名称。Promote、Rollback 禁止传入。</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>候选上游模型的原始名称，保留名称中的斜杠。</p><p>入参限制：Operation 为 Set 时必填，非空且最长 128 个字符；不能与当前主模型相同，不能占用同一 BYOK 的其他主模型或有效灰度候选名称。Promote、Rollback 禁止传入。</p>
                     * @param _modelName <p>候选上游模型的原始名称，保留名称中的斜杠。</p><p>入参限制：Operation 为 Set 时必填，非空且最长 128 个字符；不能与当前主模型相同，不能占用同一 BYOK 的其他主模型或有效灰度候选名称。Promote、Rollback 禁止传入。</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>候选上游模型的灰度流量比例。</p><p>取值范围：[1, 99]</p><p>单位：%</p><p>Set 时必填，无默认值，必须为整数；拒绝 0、100、小数、布尔值及字符串。Promote、Rollback 禁止传入。比例只影响需要重新选择上游的请求，已有有效 Sticky 绑定不迁移，实际流量占比不保证等于配置比例。</p>
                     * @return Weight <p>候选上游模型的灰度流量比例。</p><p>取值范围：[1, 99]</p><p>单位：%</p><p>Set 时必填，无默认值，必须为整数；拒绝 0、100、小数、布尔值及字符串。Promote、Rollback 禁止传入。比例只影响需要重新选择上游的请求，已有有效 Sticky 绑定不迁移，实际流量占比不保证等于配置比例。</p>
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置<p>候选上游模型的灰度流量比例。</p><p>取值范围：[1, 99]</p><p>单位：%</p><p>Set 时必填，无默认值，必须为整数；拒绝 0、100、小数、布尔值及字符串。Promote、Rollback 禁止传入。比例只影响需要重新选择上游的请求，已有有效 Sticky 绑定不迁移，实际流量占比不保证等于配置比例。</p>
                     * @param _weight <p>候选上游模型的灰度流量比例。</p><p>取值范围：[1, 99]</p><p>单位：%</p><p>Set 时必填，无默认值，必须为整数；拒绝 0、100、小数、布尔值及字符串。Promote、Rollback 禁止传入。比例只影响需要重新选择上游的请求，已有有效 Sticky 绑定不迁移，实际流量占比不保证等于配置比例。</p>
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * <p>上游模型灰度操作类型。Set：开始灰度或调整同一候选的比例；Promote：全量切换到候选模型并结束灰度；Rollback：保留当前主模型并结束灰度。</p><p>入参限制：仅支持 Set、Promote、Rollback，区分大小写。Promote 和 Rollback 仅允许在灰度中使用，且禁止携带 ModelName、Weight。</p>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <p>候选上游模型的原始名称，保留名称中的斜杠。</p><p>入参限制：Operation 为 Set 时必填，非空且最长 128 个字符；不能与当前主模型相同，不能占用同一 BYOK 的其他主模型或有效灰度候选名称。Promote、Rollback 禁止传入。</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>候选上游模型的灰度流量比例。</p><p>取值范围：[1, 99]</p><p>单位：%</p><p>Set 时必填，无默认值，必须为整数；拒绝 0、100、小数、布尔值及字符串。Promote、Rollback 禁止传入。比例只影响需要重新选择上游的请求，已有有效 Sticky 绑定不迁移，实际流量占比不保证等于配置比例。</p>
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_UPSTREAMROLLOUTOPERATION_H_
