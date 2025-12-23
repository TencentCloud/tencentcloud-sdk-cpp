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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_HOSTNAMEINDEXSETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_HOSTNAMEINDEXSETTINGS_H_

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
                * 实例主机名称序号相关设置。
                */
                class HostNameIndexSettings : public AbstractModel
                {
                public:
                    HostNameIndexSettings();
                    ~HostNameIndexSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启实例主机名创建序号，默认不开启。取值范围：</p><p>TRUE：表示开启实例主机名创建序号FALSE：表示不开启实例主机名创建序号</p>
                     * @return Enabled <p>是否开启实例主机名创建序号，默认不开启。取值范围：</p><p>TRUE：表示开启实例主机名创建序号FALSE：表示不开启实例主机名创建序号</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否开启实例主机名创建序号，默认不开启。取值范围：</p><p>TRUE：表示开启实例主机名创建序号FALSE：表示不开启实例主机名创建序号</p>
                     * @param _enabled <p>是否开启实例主机名创建序号，默认不开启。取值范围：</p><p>TRUE：表示开启实例主机名创建序号FALSE：表示不开启实例主机名创建序号</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>初始序号。取值范围与 IndexLength 参数有关：- IndexLength 为 0 时，取值范围为 [0, 99999999]。- IndexLength 为 [1, 8] 时，取值范围为 [0, 10^IndexLength-1]，最大值即为指定位数的最大数字。初始序号默认值如下：- 首次启用递增序号：初始序号默认值为 0 （ 展示位数与 IndexLength 有关，例如 IndexLength 为  4，展示值为 0000）- 非首次开启递增序号：顺延之前的递增序号，例如上次使用递增至序号 069，则新的初始序号默认值为 070。注意：修改初始序号可能会造成伸缩组内序号重复。</p>
                     * @return BeginIndex <p>初始序号。取值范围与 IndexLength 参数有关：- IndexLength 为 0 时，取值范围为 [0, 99999999]。- IndexLength 为 [1, 8] 时，取值范围为 [0, 10^IndexLength-1]，最大值即为指定位数的最大数字。初始序号默认值如下：- 首次启用递增序号：初始序号默认值为 0 （ 展示位数与 IndexLength 有关，例如 IndexLength 为  4，展示值为 0000）- 非首次开启递增序号：顺延之前的递增序号，例如上次使用递增至序号 069，则新的初始序号默认值为 070。注意：修改初始序号可能会造成伸缩组内序号重复。</p>
                     * 
                     */
                    uint64_t GetBeginIndex() const;

                    /**
                     * 设置<p>初始序号。取值范围与 IndexLength 参数有关：- IndexLength 为 0 时，取值范围为 [0, 99999999]。- IndexLength 为 [1, 8] 时，取值范围为 [0, 10^IndexLength-1]，最大值即为指定位数的最大数字。初始序号默认值如下：- 首次启用递增序号：初始序号默认值为 0 （ 展示位数与 IndexLength 有关，例如 IndexLength 为  4，展示值为 0000）- 非首次开启递增序号：顺延之前的递增序号，例如上次使用递增至序号 069，则新的初始序号默认值为 070。注意：修改初始序号可能会造成伸缩组内序号重复。</p>
                     * @param _beginIndex <p>初始序号。取值范围与 IndexLength 参数有关：- IndexLength 为 0 时，取值范围为 [0, 99999999]。- IndexLength 为 [1, 8] 时，取值范围为 [0, 10^IndexLength-1]，最大值即为指定位数的最大数字。初始序号默认值如下：- 首次启用递增序号：初始序号默认值为 0 （ 展示位数与 IndexLength 有关，例如 IndexLength 为  4，展示值为 0000）- 非首次开启递增序号：顺延之前的递增序号，例如上次使用递增至序号 069，则新的初始序号默认值为 070。注意：修改初始序号可能会造成伸缩组内序号重复。</p>
                     * 
                     */
                    void SetBeginIndex(const uint64_t& _beginIndex);

                    /**
                     * 判断参数 BeginIndex 是否已赋值
                     * @return BeginIndex 是否已赋值
                     * 
                     */
                    bool BeginIndexHasBeenSet() const;

                    /**
                     * 获取<p>递增序号长度，默认为0，表示不指定序号长度。 取值范围：0-8，最大为整数8。 - 长度设置为3，序号展示形式为：000、001、002 ... 010、011 ... 100 ... 999，序号上限为999- 长度设置为0，序号展示形式为：0、1、2 ... 10、11 ... 100 ... 1000 ...10000 ... 99999999，序号上限为99999999注意：递增序号持续超出上限会导致扩容失败，请不要设置过小的递增序号长度。</p>
                     * @return IndexLength <p>递增序号长度，默认为0，表示不指定序号长度。 取值范围：0-8，最大为整数8。 - 长度设置为3，序号展示形式为：000、001、002 ... 010、011 ... 100 ... 999，序号上限为999- 长度设置为0，序号展示形式为：0、1、2 ... 10、11 ... 100 ... 1000 ...10000 ... 99999999，序号上限为99999999注意：递增序号持续超出上限会导致扩容失败，请不要设置过小的递增序号长度。</p>
                     * 
                     */
                    uint64_t GetIndexLength() const;

                    /**
                     * 设置<p>递增序号长度，默认为0，表示不指定序号长度。 取值范围：0-8，最大为整数8。 - 长度设置为3，序号展示形式为：000、001、002 ... 010、011 ... 100 ... 999，序号上限为999- 长度设置为0，序号展示形式为：0、1、2 ... 10、11 ... 100 ... 1000 ...10000 ... 99999999，序号上限为99999999注意：递增序号持续超出上限会导致扩容失败，请不要设置过小的递增序号长度。</p>
                     * @param _indexLength <p>递增序号长度，默认为0，表示不指定序号长度。 取值范围：0-8，最大为整数8。 - 长度设置为3，序号展示形式为：000、001、002 ... 010、011 ... 100 ... 999，序号上限为999- 长度设置为0，序号展示形式为：0、1、2 ... 10、11 ... 100 ... 1000 ...10000 ... 99999999，序号上限为99999999注意：递增序号持续超出上限会导致扩容失败，请不要设置过小的递增序号长度。</p>
                     * 
                     */
                    void SetIndexLength(const uint64_t& _indexLength);

                    /**
                     * 判断参数 IndexLength 是否已赋值
                     * @return IndexLength 是否已赋值
                     * 
                     */
                    bool IndexLengthHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启实例主机名创建序号，默认不开启。取值范围：</p><p>TRUE：表示开启实例主机名创建序号FALSE：表示不开启实例主机名创建序号</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>初始序号。取值范围与 IndexLength 参数有关：- IndexLength 为 0 时，取值范围为 [0, 99999999]。- IndexLength 为 [1, 8] 时，取值范围为 [0, 10^IndexLength-1]，最大值即为指定位数的最大数字。初始序号默认值如下：- 首次启用递增序号：初始序号默认值为 0 （ 展示位数与 IndexLength 有关，例如 IndexLength 为  4，展示值为 0000）- 非首次开启递增序号：顺延之前的递增序号，例如上次使用递增至序号 069，则新的初始序号默认值为 070。注意：修改初始序号可能会造成伸缩组内序号重复。</p>
                     */
                    uint64_t m_beginIndex;
                    bool m_beginIndexHasBeenSet;

                    /**
                     * <p>递增序号长度，默认为0，表示不指定序号长度。 取值范围：0-8，最大为整数8。 - 长度设置为3，序号展示形式为：000、001、002 ... 010、011 ... 100 ... 999，序号上限为999- 长度设置为0，序号展示形式为：0、1、2 ... 10、11 ... 100 ... 1000 ...10000 ... 99999999，序号上限为99999999注意：递增序号持续超出上限会导致扩容失败，请不要设置过小的递增序号长度。</p>
                     */
                    uint64_t m_indexLength;
                    bool m_indexLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_HOSTNAMEINDEXSETTINGS_H_
