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
                     * 获取实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
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
                     * 获取主实例数据库引擎版本，支持值包括：5.6 和 5.7。
                     * @return EngineVersion 主实例数据库引擎版本，支持值包括：5.6 和 5.7。
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置主实例数据库引擎版本，支持值包括：5.6 和 5.7。
                     * @param _engineVersion 主实例数据库引擎版本，支持值包括：5.6 和 5.7。
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
                     * 获取切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 [切换访问新实例](https://cloud.tencent.com/document/product/236/15864) 触发该流程。
                     * @return WaitSwitch 切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 [切换访问新实例](https://cloud.tencent.com/document/product/236/15864) 触发该流程。
                     * 
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 [切换访问新实例](https://cloud.tencent.com/document/product/236/15864) 触发该流程。
                     * @param _waitSwitch 切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 [切换访问新实例](https://cloud.tencent.com/document/product/236/15864) 触发该流程。
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
                     * 获取是否是内核子版本升级，支持的值：1 - 升级内核子版本；0 - 升级数据库引擎版本。
                     * @return UpgradeSubversion 是否是内核子版本升级，支持的值：1 - 升级内核子版本；0 - 升级数据库引擎版本。
                     * 
                     */
                    int64_t GetUpgradeSubversion() const;

                    /**
                     * 设置是否是内核子版本升级，支持的值：1 - 升级内核子版本；0 - 升级数据库引擎版本。
                     * @param _upgradeSubversion 是否是内核子版本升级，支持的值：1 - 升级内核子版本；0 - 升级数据库引擎版本。
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
                     * 获取延迟阈值。取值范围1~10
                     * @return MaxDelayTime 延迟阈值。取值范围1~10
                     * 
                     */
                    int64_t GetMaxDelayTime() const;

                    /**
                     * 设置延迟阈值。取值范围1~10
                     * @param _maxDelayTime 延迟阈值。取值范围1~10
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
                     * 获取5.7升级8.0是否忽略关键字错误，取值范围[0,1]，1表示忽略，0表示不忽略
                     * @return IgnoreErrKeyword 5.7升级8.0是否忽略关键字错误，取值范围[0,1]，1表示忽略，0表示不忽略
                     * 
                     */
                    int64_t GetIgnoreErrKeyword() const;

                    /**
                     * 设置5.7升级8.0是否忽略关键字错误，取值范围[0,1]，1表示忽略，0表示不忽略
                     * @param _ignoreErrKeyword 5.7升级8.0是否忽略关键字错误，取值范围[0,1]，1表示忽略，0表示不忽略
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
                     * 获取版本升级支持指定参数
                     * @return ParamList 版本升级支持指定参数
                     * 
                     */
                    std::vector<UpgradeEngineVersionParams> GetParamList() const;

                    /**
                     * 设置版本升级支持指定参数
                     * @param _paramList 版本升级支持指定参数
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
                     * 实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主实例数据库引擎版本，支持值包括：5.6 和 5.7。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 切换访问新实例的方式，默认为 0。支持值包括：0 - 立刻切换，1 - 时间窗切换；当该值为 1 时，升级过程中，切换访问新实例的流程将会在时间窗内进行，或者用户主动调用接口 [切换访问新实例](https://cloud.tencent.com/document/product/236/15864) 触发该流程。
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * 是否是内核子版本升级，支持的值：1 - 升级内核子版本；0 - 升级数据库引擎版本。
                     */
                    int64_t m_upgradeSubversion;
                    bool m_upgradeSubversionHasBeenSet;

                    /**
                     * 延迟阈值。取值范围1~10
                     */
                    int64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                    /**
                     * 5.7升级8.0是否忽略关键字错误，取值范围[0,1]，1表示忽略，0表示不忽略
                     */
                    int64_t m_ignoreErrKeyword;
                    bool m_ignoreErrKeywordHasBeenSet;

                    /**
                     * 版本升级支持指定参数
                     */
                    std::vector<UpgradeEngineVersionParams> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_H_
