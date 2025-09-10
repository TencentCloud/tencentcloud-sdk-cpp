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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_OTAMODULEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_OTAMODULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 升级包类型详细信息
                */
                class OtaModuleInfo : public AbstractModel
                {
                public:
                    OtaModuleInfo();
                    ~OtaModuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模块创建时间
                     * @return CreateTime 模块创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置模块创建时间
                     * @param _createTime 模块创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取模块名称
                     * @return Name 模块名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模块名称
                     * @param _name 模块名称
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
                     * 获取产品ID
                     * @return ProductID 产品ID
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置产品ID
                     * @param _productID 产品ID
                     * 
                     */
                    void SetProductID(const std::string& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取模块类型
                     * @return FwType 模块类型
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置模块类型
                     * @param _fwType 模块类型
                     * 
                     */
                    void SetFwType(const std::string& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                    /**
                     * 获取是否系统内置升级包类型
                     * @return IsBuildIn 是否系统内置升级包类型
                     * 
                     */
                    bool GetIsBuildIn() const;

                    /**
                     * 设置是否系统内置升级包类型
                     * @param _isBuildIn 是否系统内置升级包类型
                     * 
                     */
                    void SetIsBuildIn(const bool& _isBuildIn);

                    /**
                     * 判断参数 IsBuildIn 是否已赋值
                     * @return IsBuildIn 是否已赋值
                     * 
                     */
                    bool IsBuildInHasBeenSet() const;

                    /**
                     * 获取模块描述
                     * @return Remark 模块描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置模块描述
                     * @param _remark 模块描述
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 模块创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 模块名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * 模块类型
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * 是否系统内置升级包类型
                     */
                    bool m_isBuildIn;
                    bool m_isBuildInHasBeenSet;

                    /**
                     * 模块描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_OTAMODULEINFO_H_
