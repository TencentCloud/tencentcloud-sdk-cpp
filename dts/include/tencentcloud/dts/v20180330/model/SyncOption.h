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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SYNCOPTION_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SYNCOPTION_H_

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
        namespace V20180330
        {
            namespace Model
            {
                /**
                * 灾备同步任务配置选项
                */
                class SyncOption : public AbstractModel
                {
                public:
                    SyncOption();
                    ~SyncOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取同步对象，1-整个实例，2-指定库表
                     * @return SyncObject 同步对象，1-整个实例，2-指定库表
                     */
                    uint64_t GetSyncObject() const;

                    /**
                     * 设置同步对象，1-整个实例，2-指定库表
                     * @param SyncObject 同步对象，1-整个实例，2-指定库表
                     */
                    void SetSyncObject(const uint64_t& _syncObject);

                    /**
                     * 判断参数 SyncObject 是否已赋值
                     * @return SyncObject 是否已赋值
                     */
                    bool SyncObjectHasBeenSet() const;

                    /**
                     * 获取同步开始设置，1-立即开始
                     * @return RunMode 同步开始设置，1-立即开始
                     */
                    uint64_t GetRunMode() const;

                    /**
                     * 设置同步开始设置，1-立即开始
                     * @param RunMode 同步开始设置，1-立即开始
                     */
                    void SetRunMode(const uint64_t& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取同步模式， 3-全量且增量同步
                     * @return SyncType 同步模式， 3-全量且增量同步
                     */
                    uint64_t GetSyncType() const;

                    /**
                     * 设置同步模式， 3-全量且增量同步
                     * @param SyncType 同步模式， 3-全量且增量同步
                     */
                    void SetSyncType(const uint64_t& _syncType);

                    /**
                     * 判断参数 SyncType 是否已赋值
                     * @return SyncType 是否已赋值
                     */
                    bool SyncTypeHasBeenSet() const;

                    /**
                     * 获取数据一致性检测， 1-无需配置
                     * @return ConsistencyType 数据一致性检测， 1-无需配置
                     */
                    uint64_t GetConsistencyType() const;

                    /**
                     * 设置数据一致性检测， 1-无需配置
                     * @param ConsistencyType 数据一致性检测， 1-无需配置
                     */
                    void SetConsistencyType(const uint64_t& _consistencyType);

                    /**
                     * 判断参数 ConsistencyType 是否已赋值
                     * @return ConsistencyType 是否已赋值
                     */
                    bool ConsistencyTypeHasBeenSet() const;

                private:

                    /**
                     * 同步对象，1-整个实例，2-指定库表
                     */
                    uint64_t m_syncObject;
                    bool m_syncObjectHasBeenSet;

                    /**
                     * 同步开始设置，1-立即开始
                     */
                    uint64_t m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * 同步模式， 3-全量且增量同步
                     */
                    uint64_t m_syncType;
                    bool m_syncTypeHasBeenSet;

                    /**
                     * 数据一致性检测， 1-无需配置
                     */
                    uint64_t m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SYNCOPTION_H_
