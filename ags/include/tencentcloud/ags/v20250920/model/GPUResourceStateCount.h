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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCESTATECOUNT_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCESTATECOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 资源状态计数；四项之和为组内 TotalCount，不含已销毁和补偿完成的失败资源。
                */
                class GPUResourceStateCount : public AbstractModel
                {
                public:
                    GPUResourceStateCount();
                    ~GPUResourceStateCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>准备中的资源数量，单位台。</p>
                     * @return Delivering <p>准备中的资源数量，单位台。</p>
                     * 
                     */
                    int64_t GetDelivering() const;

                    /**
                     * 设置<p>准备中的资源数量，单位台。</p>
                     * @param _delivering <p>准备中的资源数量，单位台。</p>
                     * 
                     */
                    void SetDelivering(const int64_t& _delivering);

                    /**
                     * 判断参数 Delivering 是否已赋值
                     * @return Delivering 是否已赋值
                     * 
                     */
                    bool DeliveringHasBeenSet() const;

                    /**
                     * 获取<p>已生效的资源数量，单位台；不等于当前可领取数量。</p>
                     * @return Active <p>已生效的资源数量，单位台；不等于当前可领取数量。</p>
                     * 
                     */
                    int64_t GetActive() const;

                    /**
                     * 设置<p>已生效的资源数量，单位台；不等于当前可领取数量。</p>
                     * @param _active <p>已生效的资源数量，单位台；不等于当前可领取数量。</p>
                     * 
                     */
                    void SetActive(const int64_t& _active);

                    /**
                     * 判断参数 Active 是否已赋值
                     * @return Active 是否已赋值
                     * 
                     */
                    bool ActiveHasBeenSet() const;

                    /**
                     * 获取<p>已隔离的资源数量，单位台。</p>
                     * @return Isolated <p>已隔离的资源数量，单位台。</p>
                     * 
                     */
                    int64_t GetIsolated() const;

                    /**
                     * 设置<p>已隔离的资源数量，单位台。</p>
                     * @param _isolated <p>已隔离的资源数量，单位台。</p>
                     * 
                     */
                    void SetIsolated(const int64_t& _isolated);

                    /**
                     * 判断参数 Isolated 是否已赋值
                     * @return Isolated 是否已赋值
                     * 
                     */
                    bool IsolatedHasBeenSet() const;

                    /**
                     * 获取<p>正在释放的资源数量，单位台。</p>
                     * @return Destroying <p>正在释放的资源数量，单位台。</p>
                     * 
                     */
                    int64_t GetDestroying() const;

                    /**
                     * 设置<p>正在释放的资源数量，单位台。</p>
                     * @param _destroying <p>正在释放的资源数量，单位台。</p>
                     * 
                     */
                    void SetDestroying(const int64_t& _destroying);

                    /**
                     * 判断参数 Destroying 是否已赋值
                     * @return Destroying 是否已赋值
                     * 
                     */
                    bool DestroyingHasBeenSet() const;

                private:

                    /**
                     * <p>准备中的资源数量，单位台。</p>
                     */
                    int64_t m_delivering;
                    bool m_deliveringHasBeenSet;

                    /**
                     * <p>已生效的资源数量，单位台；不等于当前可领取数量。</p>
                     */
                    int64_t m_active;
                    bool m_activeHasBeenSet;

                    /**
                     * <p>已隔离的资源数量，单位台。</p>
                     */
                    int64_t m_isolated;
                    bool m_isolatedHasBeenSet;

                    /**
                     * <p>正在释放的资源数量，单位台。</p>
                     */
                    int64_t m_destroying;
                    bool m_destroyingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCESTATECOUNT_H_
