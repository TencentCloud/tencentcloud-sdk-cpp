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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_UPDATEACCOUNTFACTORYBASELINEREQUEST_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_UPDATEACCOUNTFACTORYBASELINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/controlcenter/v20230110/model/BaselineConfigItem.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * UpdateAccountFactoryBaseline请求参数结构体
                */
                class UpdateAccountFactoryBaselineRequest : public AbstractModel
                {
                public:
                    UpdateAccountFactoryBaselineRequest();
                    ~UpdateAccountFactoryBaselineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取基线名称，基线名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     * @return Name 基线名称，基线名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置基线名称，基线名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     * @param _name 基线名称，基线名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取基线配置，覆盖更新。可以通过controlcenter:GetAccountFactoryBaseline查询现有基线配置。可以通过controlcenter:ListAccountFactoryBaselineItems查询支持的基线列表。
                     * @return BaselineConfigItems 基线配置，覆盖更新。可以通过controlcenter:GetAccountFactoryBaseline查询现有基线配置。可以通过controlcenter:ListAccountFactoryBaselineItems查询支持的基线列表。
                     * 
                     */
                    std::vector<BaselineConfigItem> GetBaselineConfigItems() const;

                    /**
                     * 设置基线配置，覆盖更新。可以通过controlcenter:GetAccountFactoryBaseline查询现有基线配置。可以通过controlcenter:ListAccountFactoryBaselineItems查询支持的基线列表。
                     * @param _baselineConfigItems 基线配置，覆盖更新。可以通过controlcenter:GetAccountFactoryBaseline查询现有基线配置。可以通过controlcenter:ListAccountFactoryBaselineItems查询支持的基线列表。
                     * 
                     */
                    void SetBaselineConfigItems(const std::vector<BaselineConfigItem>& _baselineConfigItems);

                    /**
                     * 判断参数 BaselineConfigItems 是否已赋值
                     * @return BaselineConfigItems 是否已赋值
                     * 
                     */
                    bool BaselineConfigItemsHasBeenSet() const;

                private:

                    /**
                     * 基线名称，基线名字唯一，仅支持英文字母、数宇、汉字、符号@、＆_[]-的组合，1-25个中文或英文字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 基线配置，覆盖更新。可以通过controlcenter:GetAccountFactoryBaseline查询现有基线配置。可以通过controlcenter:ListAccountFactoryBaselineItems查询支持的基线列表。
                     */
                    std::vector<BaselineConfigItem> m_baselineConfigItems;
                    bool m_baselineConfigItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_UPDATEACCOUNTFACTORYBASELINEREQUEST_H_
