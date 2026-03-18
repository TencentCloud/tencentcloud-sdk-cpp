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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeEngineVersionParams.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * UpgradeDBInstanceEngineVersion请求参数结构体
                */
                class UpgradeDBInstanceEngineVersionRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceEngineVersionRequest();
                    ~UpgradeDBInstanceEngineVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口获取，其值为输出参数中字段 InstanceId 的值。</p>
                     * @return InstanceId <p>实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口获取，其值为输出参数中字段 InstanceId 的值。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口获取，其值为输出参数中字段 InstanceId 的值。</p>
                     * @param _instanceId <p>实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口获取，其值为输出参数中字段 InstanceId 的值。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>主实例数据库引擎版本，支持值包括：5.6、5.7、8.0。<br>说明：不支持越级升级，升级后不支持降级。</p>
                     * @return EngineVersion <p>主实例数据库引擎版本，支持值包括：5.6、5.7、8.0。<br>说明：不支持越级升级，升级后不支持降级。</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>主实例数据库引擎版本，支持值包括：5.6、5.7、8.0。<br>说明：不支持越级升级，升级后不支持降级。</p>
                     * @param _engineVersion <p>主实例数据库引擎版本，支持值包括：5.6、5.7、8.0。<br>说明：不支持越级升级，升级后不支持降级。</p>
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 <a href="https://cloud.tencent.com/document/product/236/15864">切换访问新实例</a> 触发该流程。</p>
                     * @return WaitSwitch <p>切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 <a href="https://cloud.tencent.com/document/product/236/15864">切换访问新实例</a> 触发该流程。</p>
                     * 
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置<p>切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 <a href="https://cloud.tencent.com/document/product/236/15864">切换访问新实例</a> 触发该流程。</p>
                     * @param _waitSwitch <p>切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 <a href="https://cloud.tencent.com/document/product/236/15864">切换访问新实例</a> 触发该流程。</p>
                     * 
                     */
                    void SetWaitSwitch(const int64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                    /**
                     * 获取<p>是否是内核子版本升级，支持的值：1 - 升级内核子版本；0 - 升级数据库引擎版本。无默认值，请指定要升级的版本类型。</p>
                     * @return UpgradeSubversion <p>是否是内核子版本升级，支持的值：1 - 升级内核子版本；0 - 升级数据库引擎版本。无默认值，请指定要升级的版本类型。</p>
                     * 
                     */
                    int64_t GetUpgradeSubversion() const;

                    /**
                     * 设置<p>是否是内核子版本升级，支持的值：1 - 升级内核子版本；0 - 升级数据库引擎版本。无默认值，请指定要升级的版本类型。</p>
                     * @param _upgradeSubversion <p>是否是内核子版本升级，支持的值：1 - 升级内核子版本；0 - 升级数据库引擎版本。无默认值，请指定要升级的版本类型。</p>
                     * 
                     */
                    void SetUpgradeSubversion(const int64_t& _upgradeSubversion);

                    /**
                     * 判断参数 UpgradeSubversion 是否已赋值
                     * @return UpgradeSubversion 是否已赋值
                     * 
                     */
                    bool UpgradeSubversionHasBeenSet() const;

                    /**
                     * 获取<p>延迟阈值。取值范围：1 - 10。无默认值，不传此参数时，延迟阈值为0，表示延迟阈值不做设置。</p>
                     * @return MaxDelayTime <p>延迟阈值。取值范围：1 - 10。无默认值，不传此参数时，延迟阈值为0，表示延迟阈值不做设置。</p>
                     * 
                     */
                    int64_t GetMaxDelayTime() const;

                    /**
                     * 设置<p>延迟阈值。取值范围：1 - 10。无默认值，不传此参数时，延迟阈值为0，表示延迟阈值不做设置。</p>
                     * @param _maxDelayTime <p>延迟阈值。取值范围：1 - 10。无默认值，不传此参数时，延迟阈值为0，表示延迟阈值不做设置。</p>
                     * 
                     */
                    void SetMaxDelayTime(const int64_t& _maxDelayTime);

                    /**
                     * 判断参数 MaxDelayTime 是否已赋值
                     * @return MaxDelayTime 是否已赋值
                     * 
                     */
                    bool MaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>5.7升级8.0是否忽略关键字错误，取值范围[0,1]，1表示忽略，0表示不忽略。无默认值，不传此参数表示不做处理。</p>
                     * @return IgnoreErrKeyword <p>5.7升级8.0是否忽略关键字错误，取值范围[0,1]，1表示忽略，0表示不忽略。无默认值，不传此参数表示不做处理。</p>
                     * 
                     */
                    int64_t GetIgnoreErrKeyword() const;

                    /**
                     * 设置<p>5.7升级8.0是否忽略关键字错误，取值范围[0,1]，1表示忽略，0表示不忽略。无默认值，不传此参数表示不做处理。</p>
                     * @param _ignoreErrKeyword <p>5.7升级8.0是否忽略关键字错误，取值范围[0,1]，1表示忽略，0表示不忽略。无默认值，不传此参数表示不做处理。</p>
                     * 
                     */
                    void SetIgnoreErrKeyword(const int64_t& _ignoreErrKeyword);

                    /**
                     * 判断参数 IgnoreErrKeyword 是否已赋值
                     * @return IgnoreErrKeyword 是否已赋值
                     * 
                     */
                    bool IgnoreErrKeywordHasBeenSet() const;

                    /**
                     * 获取<p>版本升级支持指定参数</p>
                     * @return ParamList <p>版本升级支持指定参数</p>
                     * 
                     */
                    std::vector<UpgradeEngineVersionParams> GetParamList() const;

                    /**
                     * 设置<p>版本升级支持指定参数</p>
                     * @param _paramList <p>版本升级支持指定参数</p>
                     * 
                     */
                    void SetParamList(const std::vector<UpgradeEngineVersionParams>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口获取，其值为输出参数中字段 InstanceId 的值。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主实例数据库引擎版本，支持值包括：5.6、5.7、8.0。<br>说明：不支持越级升级，升级后不支持降级。</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 <a href="https://cloud.tencent.com/document/product/236/15864">切换访问新实例</a> 触发该流程。</p>
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * <p>是否是内核子版本升级，支持的值：1 - 升级内核子版本；0 - 升级数据库引擎版本。无默认值，请指定要升级的版本类型。</p>
                     */
                    int64_t m_upgradeSubversion;
                    bool m_upgradeSubversionHasBeenSet;

                    /**
                     * <p>延迟阈值。取值范围：1 - 10。无默认值，不传此参数时，延迟阈值为0，表示延迟阈值不做设置。</p>
                     */
                    int64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                    /**
                     * <p>5.7升级8.0是否忽略关键字错误，取值范围[0,1]，1表示忽略，0表示不忽略。无默认值，不传此参数表示不做处理。</p>
                     */
                    int64_t m_ignoreErrKeyword;
                    bool m_ignoreErrKeywordHasBeenSet;

                    /**
                     * <p>版本升级支持指定参数</p>
                     */
                    std::vector<UpgradeEngineVersionParams> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_H_
