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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBVERSIONDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBVERSIONDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 修改数据库内核版本任务信息
                */
                class ModifyDbVersionData : public AbstractModel
                {
                public:
                    ModifyDbVersionData();
                    ~ModifyDbVersionData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取修改前版本
                     * @return OldVersion 修改前版本
                     * 
                     */
                    std::string GetOldVersion() const;

                    /**
                     * 设置修改前版本
                     * @param _oldVersion 修改前版本
                     * 
                     */
                    void SetOldVersion(const std::string& _oldVersion);

                    /**
                     * 判断参数 OldVersion 是否已赋值
                     * @return OldVersion 是否已赋值
                     * 
                     */
                    bool OldVersionHasBeenSet() const;

                    /**
                     * 获取修改后版本
                     * @return NewVersion 修改后版本
                     * 
                     */
                    std::string GetNewVersion() const;

                    /**
                     * 设置修改后版本
                     * @param _newVersion 修改后版本
                     * 
                     */
                    void SetNewVersion(const std::string& _newVersion);

                    /**
                     * 判断参数 NewVersion 是否已赋值
                     * @return NewVersion 是否已赋值
                     * 
                     */
                    bool NewVersionHasBeenSet() const;

                    /**
                     * 获取升级方式
                     * @return UpgradeType 升级方式
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置升级方式
                     * @param _upgradeType 升级方式
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                private:

                    /**
                     * 修改前版本
                     */
                    std::string m_oldVersion;
                    bool m_oldVersionHasBeenSet;

                    /**
                     * 修改后版本
                     */
                    std::string m_newVersion;
                    bool m_newVersionHasBeenSet;

                    /**
                     * 升级方式
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBVERSIONDATA_H_
