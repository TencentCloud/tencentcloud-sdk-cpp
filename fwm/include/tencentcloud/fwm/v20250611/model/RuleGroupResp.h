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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_RULEGROUPRESP_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_RULEGROUPRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/ReceiveAccount.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 规则组详情数据
                */
                class RuleGroupResp : public AbstractModel
                {
                public:
                    RuleGroupResp();
                    ~RuleGroupResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取租户Id
                     * @return AppId 租户Id
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置租户Id
                     * @param _appId 租户Id
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取规则组Id
                     * @return GroupId 规则组Id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置规则组Id
                     * @param _groupId 规则组Id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取规则组名称
                     * @return GroupName 规则组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置规则组名称
                     * @param _groupName 规则组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取规则数量
                     * @return RuleCount 规则数量
                     * 
                     */
                    int64_t GetRuleCount() const;

                    /**
                     * 设置规则数量
                     * @param _ruleCount 规则数量
                     * 
                     */
                    void SetRuleCount(const int64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取产品类型
                     * @return Product 产品类型
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置产品类型
                     * @param _product 产品类型
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建人SubUin
                     * @return CreateBy 创建人SubUin
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置创建人SubUin
                     * @param _createBy 创建人SubUin
                     * 
                     */
                    void SetCreateBy(const std::string& _createBy);

                    /**
                     * 判断参数 CreateBy 是否已赋值
                     * @return CreateBy 是否已赋值
                     * 
                     */
                    bool CreateByHasBeenSet() const;

                    /**
                     * 获取创建人名称
                     * @return CreateName 创建人名称
                     * 
                     */
                    std::string GetCreateName() const;

                    /**
                     * 设置创建人名称
                     * @param _createName 创建人名称
                     * 
                     */
                    void SetCreateName(const std::string& _createName);

                    /**
                     * 判断参数 CreateName 是否已赋值
                     * @return CreateName 是否已赋值
                     * 
                     */
                    bool CreateNameHasBeenSet() const;

                    /**
                     * 获取更新人SubUin
                     * @return UpdateBy 更新人SubUin
                     * 
                     */
                    std::string GetUpdateBy() const;

                    /**
                     * 设置更新人SubUin
                     * @param _updateBy 更新人SubUin
                     * 
                     */
                    void SetUpdateBy(const std::string& _updateBy);

                    /**
                     * 判断参数 UpdateBy 是否已赋值
                     * @return UpdateBy 是否已赋值
                     * 
                     */
                    bool UpdateByHasBeenSet() const;

                    /**
                     * 获取更新人名称
                     * @return UpdateName 更新人名称
                     * 
                     */
                    std::string GetUpdateName() const;

                    /**
                     * 设置更新人名称
                     * @param _updateName 更新人名称
                     * 
                     */
                    void SetUpdateName(const std::string& _updateName);

                    /**
                     * 判断参数 UpdateName 是否已赋值
                     * @return UpdateName 是否已赋值
                     * 
                     */
                    bool UpdateNameHasBeenSet() const;

                    /**
                     * 获取下发关联账号
                     * @return ReceiveAccount 下发关联账号
                     * 
                     */
                    std::vector<ReceiveAccount> GetReceiveAccount() const;

                    /**
                     * 设置下发关联账号
                     * @param _receiveAccount 下发关联账号
                     * 
                     */
                    void SetReceiveAccount(const std::vector<ReceiveAccount>& _receiveAccount);

                    /**
                     * 判断参数 ReceiveAccount 是否已赋值
                     * @return ReceiveAccount 是否已赋值
                     * 
                     */
                    bool ReceiveAccountHasBeenSet() const;

                    /**
                     * 获取 所属阶段
                     * @return ExecAreas  所属阶段
                     * 
                     */
                    std::vector<std::string> GetExecAreas() const;

                    /**
                     * 设置 所属阶段
                     * @param _execAreas  所属阶段
                     * 
                     */
                    void SetExecAreas(const std::vector<std::string>& _execAreas);

                    /**
                     * 判断参数 ExecAreas 是否已赋值
                     * @return ExecAreas 是否已赋值
                     * 
                     */
                    bool ExecAreasHasBeenSet() const;

                    /**
                     * 获取规则方向：1-入站规则，0-出站规则，-1 表示无方向
                     * @return Direction 规则方向：1-入站规则，0-出站规则，-1 表示无方向
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置规则方向：1-入站规则，0-出站规则，-1 表示无方向
                     * @param _direction 规则方向：1-入站规则，0-出站规则，-1 表示无方向
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * 租户Id
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 规则组Id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 规则组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 规则数量
                     */
                    int64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * 产品类型
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建人SubUin
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * 创建人名称
                     */
                    std::string m_createName;
                    bool m_createNameHasBeenSet;

                    /**
                     * 更新人SubUin
                     */
                    std::string m_updateBy;
                    bool m_updateByHasBeenSet;

                    /**
                     * 更新人名称
                     */
                    std::string m_updateName;
                    bool m_updateNameHasBeenSet;

                    /**
                     * 下发关联账号
                     */
                    std::vector<ReceiveAccount> m_receiveAccount;
                    bool m_receiveAccountHasBeenSet;

                    /**
                     *  所属阶段
                     */
                    std::vector<std::string> m_execAreas;
                    bool m_execAreasHasBeenSet;

                    /**
                     * 规则方向：1-入站规则，0-出站规则，-1 表示无方向
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_RULEGROUPRESP_H_
