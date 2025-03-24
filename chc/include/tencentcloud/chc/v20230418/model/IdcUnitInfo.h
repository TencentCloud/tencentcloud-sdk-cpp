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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_IDCUNITINFO_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_IDCUNITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 机房管理单元
                */
                class IdcUnitInfo : public AbstractModel
                {
                public:
                    IdcUnitInfo();
                    ~IdcUnitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机房管理单元地址
                     * @return Address 机房管理单元地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置机房管理单元地址
                     * @param _address 机房管理单元地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取机房经理
                     * @return Operator 机房经理
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置机房经理
                     * @param _operator 机房经理
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取联系电话
                     * @return TelNumber 联系电话
                     * 
                     */
                    std::string GetTelNumber() const;

                    /**
                     * 设置联系电话
                     * @param _telNumber 联系电话
                     * 
                     */
                    void SetTelNumber(const std::string& _telNumber);

                    /**
                     * 判断参数 TelNumber 是否已赋值
                     * @return TelNumber 是否已赋值
                     * 
                     */
                    bool TelNumberHasBeenSet() const;

                    /**
                     * 获取资产管理员
                     * @return AssetManager 资产管理员
                     * 
                     */
                    std::string GetAssetManager() const;

                    /**
                     * 设置资产管理员
                     * @param _assetManager 资产管理员
                     * 
                     */
                    void SetAssetManager(const std::string& _assetManager);

                    /**
                     * 判断参数 AssetManager 是否已赋值
                     * @return AssetManager 是否已赋值
                     * 
                     */
                    bool AssetManagerHasBeenSet() const;

                    /**
                     * 获取资产管理员电话
                     * @return AssetManagerTelNumber 资产管理员电话
                     * 
                     */
                    std::string GetAssetManagerTelNumber() const;

                    /**
                     * 设置资产管理员电话
                     * @param _assetManagerTelNumber 资产管理员电话
                     * 
                     */
                    void SetAssetManagerTelNumber(const std::string& _assetManagerTelNumber);

                    /**
                     * 判断参数 AssetManagerTelNumber 是否已赋值
                     * @return AssetManagerTelNumber 是否已赋值
                     * 
                     */
                    bool AssetManagerTelNumberHasBeenSet() const;

                private:

                    /**
                     * 机房管理单元地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 机房经理
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 联系电话
                     */
                    std::string m_telNumber;
                    bool m_telNumberHasBeenSet;

                    /**
                     * 资产管理员
                     */
                    std::string m_assetManager;
                    bool m_assetManagerHasBeenSet;

                    /**
                     * 资产管理员电话
                     */
                    std::string m_assetManagerTelNumber;
                    bool m_assetManagerTelNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_IDCUNITINFO_H_
