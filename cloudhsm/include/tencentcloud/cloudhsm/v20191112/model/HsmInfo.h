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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_HSMINFO_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_HSMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudhsm/v20191112/model/VsmInfo.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 支持的加密机类型信息
                */
                class HsmInfo : public AbstractModel
                {
                public:
                    HsmInfo();
                    ~HsmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加密机型号
                     * @return Model 加密机型号
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置加密机型号
                     * @param _model 加密机型号
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取此类型的加密机所支持的VSM类型列表
                     * @return VsmTypes 此类型的加密机所支持的VSM类型列表
                     * 
                     */
                    std::vector<VsmInfo> GetVsmTypes() const;

                    /**
                     * 设置此类型的加密机所支持的VSM类型列表
                     * @param _vsmTypes 此类型的加密机所支持的VSM类型列表
                     * 
                     */
                    void SetVsmTypes(const std::vector<VsmInfo>& _vsmTypes);

                    /**
                     * 判断参数 VsmTypes 是否已赋值
                     * @return VsmTypes 是否已赋值
                     * 
                     */
                    bool VsmTypesHasBeenSet() const;

                    /**
                     * 获取加密机母机类型：virtualization、GHSM、EHSM、SHSM
                     * @return HsmType 加密机母机类型：virtualization、GHSM、EHSM、SHSM
                     * 
                     */
                    std::string GetHsmType() const;

                    /**
                     * 设置加密机母机类型：virtualization、GHSM、EHSM、SHSM
                     * @param _hsmType 加密机母机类型：virtualization、GHSM、EHSM、SHSM
                     * 
                     */
                    void SetHsmType(const std::string& _hsmType);

                    /**
                     * 判断参数 HsmType 是否已赋值
                     * @return HsmType 是否已赋值
                     * 
                     */
                    bool HsmTypeHasBeenSet() const;

                private:

                    /**
                     * 加密机型号
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 此类型的加密机所支持的VSM类型列表
                     */
                    std::vector<VsmInfo> m_vsmTypes;
                    bool m_vsmTypesHasBeenSet;

                    /**
                     * 加密机母机类型：virtualization、GHSM、EHSM、SHSM
                     */
                    std::string m_hsmType;
                    bool m_hsmTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_HSMINFO_H_
