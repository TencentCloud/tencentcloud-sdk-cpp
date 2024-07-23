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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCEPARAMTPLREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCEPARAMTPLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ParamType.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceParamTpl请求参数结构体
                */
                class ModifyDBInstanceParamTplRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceParamTplRequest();
                    ~ModifyDBInstanceParamTplRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改的参数模板 ID，示例：tpl-jglr91vew。
                     * @return TplId 待修改的参数模板 ID，示例：tpl-jglr91vew。
                     * 
                     */
                    std::string GetTplId() const;

                    /**
                     * 设置待修改的参数模板 ID，示例：tpl-jglr91vew。
                     * @param _tplId 待修改的参数模板 ID，示例：tpl-jglr91vew。
                     * 
                     */
                    void SetTplId(const std::string& _tplId);

                    /**
                     * 判断参数 TplId 是否已赋值
                     * @return TplId 是否已赋值
                     * 
                     */
                    bool TplIdHasBeenSet() const;

                    /**
                     * 获取待修改参数模板名称，为空时，保持原有名称。
                     * @return TplName 待修改参数模板名称，为空时，保持原有名称。
                     * 
                     */
                    std::string GetTplName() const;

                    /**
                     * 设置待修改参数模板名称，为空时，保持原有名称。
                     * @param _tplName 待修改参数模板名称，为空时，保持原有名称。
                     * 
                     */
                    void SetTplName(const std::string& _tplName);

                    /**
                     * 判断参数 TplName 是否已赋值
                     * @return TplName 是否已赋值
                     * 
                     */
                    bool TplNameHasBeenSet() const;

                    /**
                     * 获取待修改参数模板描述，为空时，保持原有描述。
                     * @return TplDesc 待修改参数模板描述，为空时，保持原有描述。
                     * 
                     */
                    std::string GetTplDesc() const;

                    /**
                     * 设置待修改参数模板描述，为空时，保持原有描述。
                     * @param _tplDesc 待修改参数模板描述，为空时，保持原有描述。
                     * 
                     */
                    void SetTplDesc(const std::string& _tplDesc);

                    /**
                     * 判断参数 TplDesc 是否已赋值
                     * @return TplDesc 是否已赋值
                     * 
                     */
                    bool TplDescHasBeenSet() const;

                    /**
                     * 获取待修改参数名及参数值，为空时，各参数保持原有值，支持单条或批量修改。
                     * @return Params 待修改参数名及参数值，为空时，各参数保持原有值，支持单条或批量修改。
                     * 
                     */
                    std::vector<ParamType> GetParams() const;

                    /**
                     * 设置待修改参数名及参数值，为空时，各参数保持原有值，支持单条或批量修改。
                     * @param _params 待修改参数名及参数值，为空时，各参数保持原有值，支持单条或批量修改。
                     * 
                     */
                    void SetParams(const std::vector<ParamType>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 待修改的参数模板 ID，示例：tpl-jglr91vew。
                     */
                    std::string m_tplId;
                    bool m_tplIdHasBeenSet;

                    /**
                     * 待修改参数模板名称，为空时，保持原有名称。
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                    /**
                     * 待修改参数模板描述，为空时，保持原有描述。
                     */
                    std::string m_tplDesc;
                    bool m_tplDescHasBeenSet;

                    /**
                     * 待修改参数名及参数值，为空时，各参数保持原有值，支持单条或批量修改。
                     */
                    std::vector<ParamType> m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCEPARAMTPLREQUEST_H_
