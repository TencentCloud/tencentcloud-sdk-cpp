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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXALERTSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXALERTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifySandboxAlertStatus请求参数结构体
                */
                class ModifySandboxAlertStatusRequest : public AbstractModel
                {
                public:
                    ModifySandboxAlertStatusRequest();
                    ~ModifySandboxAlertStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警类型
枚举值：
ACL：访问控制
DLP：数据泄露防护
LLM_AUDIT：LLM 审计
                     * @return AlertType 告警类型
枚举值：
ACL：访问控制
DLP：数据泄露防护
LLM_AUDIT：LLM 审计
                     * 
                     */
                    std::string GetAlertType() const;

                    /**
                     * 设置告警类型
枚举值：
ACL：访问控制
DLP：数据泄露防护
LLM_AUDIT：LLM 审计
                     * @param _alertType 告警类型
枚举值：
ACL：访问控制
DLP：数据泄露防护
LLM_AUDIT：LLM 审计
                     * 
                     */
                    void SetAlertType(const std::string& _alertType);

                    /**
                     * 判断参数 AlertType 是否已赋值
                     * @return AlertType 是否已赋值
                     * 
                     */
                    bool AlertTypeHasBeenSet() const;

                    /**
                     * 获取归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     * @return BelongAssetType 归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     * @param _belongAssetType 归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     * 
                     */
                    void SetBelongAssetType(const std::string& _belongAssetType);

                    /**
                     * 判断参数 BelongAssetType 是否已赋值
                     * @return BelongAssetType 是否已赋值
                     * 
                     */
                    bool BelongAssetTypeHasBeenSet() const;

                    /**
                     * 获取告警记录 ID 列表
入参限制：非空，长度 1-100，去重后生效
                     * @return IDList 告警记录 ID 列表
入参限制：非空，长度 1-100，去重后生效
                     * 
                     */
                    std::vector<int64_t> GetIDList() const;

                    /**
                     * 设置告警记录 ID 列表
入参限制：非空，长度 1-100，去重后生效
                     * @param _iDList 告警记录 ID 列表
入参限制：非空，长度 1-100，去重后生效
                     * 
                     */
                    void SetIDList(const std::vector<int64_t>& _iDList);

                    /**
                     * 判断参数 IDList 是否已赋值
                     * @return IDList 是否已赋值
                     * 
                     */
                    bool IDListHasBeenSet() const;

                    /**
                     * 获取目标操作
枚举值：
HANDLED：已处理
IGNORE：已忽略
PASS：已加白
DELETE：删除（不可恢复）
                     * @return Status 目标操作
枚举值：
HANDLED：已处理
IGNORE：已忽略
PASS：已加白
DELETE：删除（不可恢复）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置目标操作
枚举值：
HANDLED：已处理
IGNORE：已忽略
PASS：已加白
DELETE：删除（不可恢复）
                     * @param _status 目标操作
枚举值：
HANDLED：已处理
IGNORE：已忽略
PASS：已加白
DELETE：删除（不可恢复）
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 告警类型
枚举值：
ACL：访问控制
DLP：数据泄露防护
LLM_AUDIT：LLM 审计
                     */
                    std::string m_alertType;
                    bool m_alertTypeHasBeenSet;

                    /**
                     * 归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * 告警记录 ID 列表
入参限制：非空，长度 1-100，去重后生效
                     */
                    std::vector<int64_t> m_iDList;
                    bool m_iDListHasBeenSet;

                    /**
                     * 目标操作
枚举值：
HANDLED：已处理
IGNORE：已忽略
PASS：已加白
DELETE：删除（不可恢复）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXALERTSTATUSREQUEST_H_
