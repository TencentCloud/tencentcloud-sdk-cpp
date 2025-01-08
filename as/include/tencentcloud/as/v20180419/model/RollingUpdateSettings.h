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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_ROLLINGUPDATESETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_ROLLINGUPDATESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 滚动更新设置。
                */
                class RollingUpdateSettings : public AbstractModel
                {
                public:
                    RollingUpdateSettings();
                    ~RollingUpdateSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批次数量。批次数量为大于 0 的正整数，但不能大于待刷新实例数量。
                     * @return BatchNumber 批次数量。批次数量为大于 0 的正整数，但不能大于待刷新实例数量。
                     * 
                     */
                    uint64_t GetBatchNumber() const;

                    /**
                     * 设置批次数量。批次数量为大于 0 的正整数，但不能大于待刷新实例数量。
                     * @param _batchNumber 批次数量。批次数量为大于 0 的正整数，但不能大于待刷新实例数量。
                     * 
                     */
                    void SetBatchNumber(const uint64_t& _batchNumber);

                    /**
                     * 判断参数 BatchNumber 是否已赋值
                     * @return BatchNumber 是否已赋值
                     * 
                     */
                    bool BatchNumberHasBeenSet() const;

                    /**
                     * 获取批次间暂停策略。默认值为 Automatic，取值范围如下：
<li>FIRST_BATCH_PAUSE：第一批次更新完成后暂停</li>
<li>BATCH_INTERVAL_PAUSE：批次间暂停</li>
<li>AUTOMATIC：不暂停</li>
                     * @return BatchPause 批次间暂停策略。默认值为 Automatic，取值范围如下：
<li>FIRST_BATCH_PAUSE：第一批次更新完成后暂停</li>
<li>BATCH_INTERVAL_PAUSE：批次间暂停</li>
<li>AUTOMATIC：不暂停</li>
                     * 
                     */
                    std::string GetBatchPause() const;

                    /**
                     * 设置批次间暂停策略。默认值为 Automatic，取值范围如下：
<li>FIRST_BATCH_PAUSE：第一批次更新完成后暂停</li>
<li>BATCH_INTERVAL_PAUSE：批次间暂停</li>
<li>AUTOMATIC：不暂停</li>
                     * @param _batchPause 批次间暂停策略。默认值为 Automatic，取值范围如下：
<li>FIRST_BATCH_PAUSE：第一批次更新完成后暂停</li>
<li>BATCH_INTERVAL_PAUSE：批次间暂停</li>
<li>AUTOMATIC：不暂停</li>
                     * 
                     */
                    void SetBatchPause(const std::string& _batchPause);

                    /**
                     * 判断参数 BatchPause 是否已赋值
                     * @return BatchPause 是否已赋值
                     * 
                     */
                    bool BatchPauseHasBeenSet() const;

                    /**
                     * 获取最大额外数量。设置该参数后，在滚动更新开始前根据启动配置创建一批按量计费的额外实例，滚动更新完成后销毁额外实例。
该参数用于保证滚动更新过程中可用实例的数量，最大额外数量不能超过滚动更新单个批次的刷新实例数。回滚流程暂不支持该参数。
                     * @return MaxSurge 最大额外数量。设置该参数后，在滚动更新开始前根据启动配置创建一批按量计费的额外实例，滚动更新完成后销毁额外实例。
该参数用于保证滚动更新过程中可用实例的数量，最大额外数量不能超过滚动更新单个批次的刷新实例数。回滚流程暂不支持该参数。
                     * 
                     */
                    int64_t GetMaxSurge() const;

                    /**
                     * 设置最大额外数量。设置该参数后，在滚动更新开始前根据启动配置创建一批按量计费的额外实例，滚动更新完成后销毁额外实例。
该参数用于保证滚动更新过程中可用实例的数量，最大额外数量不能超过滚动更新单个批次的刷新实例数。回滚流程暂不支持该参数。
                     * @param _maxSurge 最大额外数量。设置该参数后，在滚动更新开始前根据启动配置创建一批按量计费的额外实例，滚动更新完成后销毁额外实例。
该参数用于保证滚动更新过程中可用实例的数量，最大额外数量不能超过滚动更新单个批次的刷新实例数。回滚流程暂不支持该参数。
                     * 
                     */
                    void SetMaxSurge(const int64_t& _maxSurge);

                    /**
                     * 判断参数 MaxSurge 是否已赋值
                     * @return MaxSurge 是否已赋值
                     * 
                     */
                    bool MaxSurgeHasBeenSet() const;

                    /**
                     * 获取失败处理策略。默认值为 AUTO_PAUSE，取值范围如下：
<li>AUTO_PAUSE：刷新失败后暂停</li>
<li>AUTO_ROLLBACK：刷新失败后回滚。回滚时每批次回滚一台实例，CheckInstanceTargetHealth 参数值与原刷新活动一致。MaxSurge参数引入的扩缩容流程失败无需回滚，会用取消动作代替回滚</li>
<li>AUTO_CANCEL：刷新失败后取消</li>
                     * @return FailProcess 失败处理策略。默认值为 AUTO_PAUSE，取值范围如下：
<li>AUTO_PAUSE：刷新失败后暂停</li>
<li>AUTO_ROLLBACK：刷新失败后回滚。回滚时每批次回滚一台实例，CheckInstanceTargetHealth 参数值与原刷新活动一致。MaxSurge参数引入的扩缩容流程失败无需回滚，会用取消动作代替回滚</li>
<li>AUTO_CANCEL：刷新失败后取消</li>
                     * 
                     */
                    std::string GetFailProcess() const;

                    /**
                     * 设置失败处理策略。默认值为 AUTO_PAUSE，取值范围如下：
<li>AUTO_PAUSE：刷新失败后暂停</li>
<li>AUTO_ROLLBACK：刷新失败后回滚。回滚时每批次回滚一台实例，CheckInstanceTargetHealth 参数值与原刷新活动一致。MaxSurge参数引入的扩缩容流程失败无需回滚，会用取消动作代替回滚</li>
<li>AUTO_CANCEL：刷新失败后取消</li>
                     * @param _failProcess 失败处理策略。默认值为 AUTO_PAUSE，取值范围如下：
<li>AUTO_PAUSE：刷新失败后暂停</li>
<li>AUTO_ROLLBACK：刷新失败后回滚。回滚时每批次回滚一台实例，CheckInstanceTargetHealth 参数值与原刷新活动一致。MaxSurge参数引入的扩缩容流程失败无需回滚，会用取消动作代替回滚</li>
<li>AUTO_CANCEL：刷新失败后取消</li>
                     * 
                     */
                    void SetFailProcess(const std::string& _failProcess);

                    /**
                     * 判断参数 FailProcess 是否已赋值
                     * @return FailProcess 是否已赋值
                     * 
                     */
                    bool FailProcessHasBeenSet() const;

                private:

                    /**
                     * 批次数量。批次数量为大于 0 的正整数，但不能大于待刷新实例数量。
                     */
                    uint64_t m_batchNumber;
                    bool m_batchNumberHasBeenSet;

                    /**
                     * 批次间暂停策略。默认值为 Automatic，取值范围如下：
<li>FIRST_BATCH_PAUSE：第一批次更新完成后暂停</li>
<li>BATCH_INTERVAL_PAUSE：批次间暂停</li>
<li>AUTOMATIC：不暂停</li>
                     */
                    std::string m_batchPause;
                    bool m_batchPauseHasBeenSet;

                    /**
                     * 最大额外数量。设置该参数后，在滚动更新开始前根据启动配置创建一批按量计费的额外实例，滚动更新完成后销毁额外实例。
该参数用于保证滚动更新过程中可用实例的数量，最大额外数量不能超过滚动更新单个批次的刷新实例数。回滚流程暂不支持该参数。
                     */
                    int64_t m_maxSurge;
                    bool m_maxSurgeHasBeenSet;

                    /**
                     * 失败处理策略。默认值为 AUTO_PAUSE，取值范围如下：
<li>AUTO_PAUSE：刷新失败后暂停</li>
<li>AUTO_ROLLBACK：刷新失败后回滚。回滚时每批次回滚一台实例，CheckInstanceTargetHealth 参数值与原刷新活动一致。MaxSurge参数引入的扩缩容流程失败无需回滚，会用取消动作代替回滚</li>
<li>AUTO_CANCEL：刷新失败后取消</li>
                     */
                    std::string m_failProcess;
                    bool m_failProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_ROLLINGUPDATESETTINGS_H_
