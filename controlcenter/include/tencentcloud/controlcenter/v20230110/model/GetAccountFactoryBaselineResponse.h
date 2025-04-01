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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_GETACCOUNTFACTORYBASELINERESPONSE_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_GETACCOUNTFACTORYBASELINERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/controlcenter/v20230110/model/BaselineInfoItem.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * GetAccountFactoryBaseline返回参数结构体
                */
                class GetAccountFactoryBaselineResponse : public AbstractModel
                {
                public:
                    GetAccountFactoryBaselineResponse();
                    ~GetAccountFactoryBaselineResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源所属主账号uin。
                     * @return OwnerUin 资源所属主账号uin。
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取基线项名称，基线项名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     * @return Name 基线项名称，基线项名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取基线项配置列表。
                     * @return BaselineConfigItems 基线项配置列表。
                     * 
                     */
                    std::vector<BaselineInfoItem> GetBaselineConfigItems() const;

                    /**
                     * 判断参数 BaselineConfigItems 是否已赋值
                     * @return BaselineConfigItems 是否已赋值
                     * 
                     */
                    bool BaselineConfigItemsHasBeenSet() const;

                    /**
                     * 获取创建时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     * @return CreateTime 创建时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     * @return UpdateTime 更新时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 资源所属主账号uin。
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 基线项名称，基线项名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 基线项配置列表。
                     */
                    std::vector<BaselineInfoItem> m_baselineConfigItems;
                    bool m_baselineConfigItemsHasBeenSet;

                    /**
                     * 创建时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_GETACCOUNTFACTORYBASELINERESPONSE_H_
