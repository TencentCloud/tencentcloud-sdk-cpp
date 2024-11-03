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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APIASSET_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APIASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * api列表
                */
                class ApiAsset : public AbstractModel
                {
                public:
                    ApiAsset();
                    ~ApiAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取请求方法
                     * @return Method 请求方法
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方法
                     * @param _method 请求方法
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取api名称
                     * @return ApiName api名称
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置api名称
                     * @param _apiName api名称
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取场景
                     * @return Scene 场景
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置场景
                     * @param _scene 场景
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取数据标签
                     * @return Label 数据标签
                     * 
                     */
                    std::vector<std::string> GetLabel() const;

                    /**
                     * 设置数据标签
                     * @param _label 数据标签
                     * 
                     */
                    void SetLabel(const std::vector<std::string>& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取过去7天是否活跃
                     * @return Active 过去7天是否活跃
                     * 
                     */
                    bool GetActive() const;

                    /**
                     * 设置过去7天是否活跃
                     * @param _active 过去7天是否活跃
                     * 
                     */
                    void SetActive(const bool& _active);

                    /**
                     * 判断参数 Active 是否已赋值
                     * @return Active 是否已赋值
                     * 
                     */
                    bool ActiveHasBeenSet() const;

                    /**
                     * 获取最近更新时间
                     * @return Timestamp 最近更新时间
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置最近更新时间
                     * @param _timestamp 最近更新时间
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取api发现时间
                     * @return InsertTime api发现时间
                     * 
                     */
                    uint64_t GetInsertTime() const;

                    /**
                     * 设置api发现时间
                     * @param _insertTime api发现时间
                     * 
                     */
                    void SetInsertTime(const uint64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取资产状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     * @return Mode 资产状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置资产状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     * @param _mode 资产状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取风险等级，100,200,300对应低中高
                     * @return Level 风险等级，100,200,300对应低中高
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级，100,200,300对应低中高
                     * @param _level 风险等级，100,200,300对应低中高
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取近30天调用量
                     * @return Count 近30天调用量
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置近30天调用量
                     * @param _count 近30天调用量
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否鉴权，1标识是，0表示否
                     * @return IsAuth 是否鉴权，1标识是，0表示否
                     * 
                     */
                    int64_t GetIsAuth() const;

                    /**
                     * 设置是否鉴权，1标识是，0表示否
                     * @param _isAuth 是否鉴权，1标识是，0表示否
                     * 
                     */
                    void SetIsAuth(const int64_t& _isAuth);

                    /**
                     * 判断参数 IsAuth 是否已赋值
                     * @return IsAuth 是否已赋值
                     * 
                     */
                    bool IsAuthHasBeenSet() const;

                    /**
                     * 获取如果添加了api入参检测规则，则此id返回值不为0
                     * @return ApiRequestRuleId 如果添加了api入参检测规则，则此id返回值不为0
                     * 
                     */
                    int64_t GetApiRequestRuleId() const;

                    /**
                     * 设置如果添加了api入参检测规则，则此id返回值不为0
                     * @param _apiRequestRuleId 如果添加了api入参检测规则，则此id返回值不为0
                     * 
                     */
                    void SetApiRequestRuleId(const int64_t& _apiRequestRuleId);

                    /**
                     * 判断参数 ApiRequestRuleId 是否已赋值
                     * @return ApiRequestRuleId 是否已赋值
                     * 
                     */
                    bool ApiRequestRuleIdHasBeenSet() const;

                    /**
                     * 获取如果添加了api限流规则，则此id返回值不为0
                     * @return ApiLimitRuleId 如果添加了api限流规则，则此id返回值不为0
                     * 
                     */
                    int64_t GetApiLimitRuleId() const;

                    /**
                     * 设置如果添加了api限流规则，则此id返回值不为0
                     * @param _apiLimitRuleId 如果添加了api限流规则，则此id返回值不为0
                     * 
                     */
                    void SetApiLimitRuleId(const int64_t& _apiLimitRuleId);

                    /**
                     * 判断参数 ApiLimitRuleId 是否已赋值
                     * @return ApiLimitRuleId 是否已赋值
                     * 
                     */
                    bool ApiLimitRuleIdHasBeenSet() const;

                    /**
                     * 获取对象接入和泛域名接入时，展示host列表
                     * @return HostList 对象接入和泛域名接入时，展示host列表
                     * 
                     */
                    std::vector<std::string> GetHostList() const;

                    /**
                     * 设置对象接入和泛域名接入时，展示host列表
                     * @param _hostList 对象接入和泛域名接入时，展示host列表
                     * 
                     */
                    void SetHostList(const std::vector<std::string>& _hostList);

                    /**
                     * 判断参数 HostList 是否已赋值
                     * @return HostList 是否已赋值
                     * 
                     */
                    bool HostListHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 请求方法
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * api名称
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * 场景
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 数据标签
                     */
                    std::vector<std::string> m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 过去7天是否活跃
                     */
                    bool m_active;
                    bool m_activeHasBeenSet;

                    /**
                     * 最近更新时间
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * api发现时间
                     */
                    uint64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 资产状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 风险等级，100,200,300对应低中高
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 近30天调用量
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否鉴权，1标识是，0表示否
                     */
                    int64_t m_isAuth;
                    bool m_isAuthHasBeenSet;

                    /**
                     * 如果添加了api入参检测规则，则此id返回值不为0
                     */
                    int64_t m_apiRequestRuleId;
                    bool m_apiRequestRuleIdHasBeenSet;

                    /**
                     * 如果添加了api限流规则，则此id返回值不为0
                     */
                    int64_t m_apiLimitRuleId;
                    bool m_apiLimitRuleIdHasBeenSet;

                    /**
                     * 对象接入和泛域名接入时，展示host列表
                     */
                    std::vector<std::string> m_hostList;
                    bool m_hostListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APIASSET_H_
