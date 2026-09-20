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
                     * 获取<p>修改前版本</p>
                     * @return OldVersion <p>修改前版本</p>
                     * 
                     */
                    std::string GetOldVersion() const;

                    /**
                     * 设置<p>修改前版本</p>
                     * @param _oldVersion <p>修改前版本</p>
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
                     * 获取<p>修改后版本</p>
                     * @return NewVersion <p>修改后版本</p>
                     * 
                     */
                    std::string GetNewVersion() const;

                    /**
                     * 设置<p>修改后版本</p>
                     * @param _newVersion <p>修改后版本</p>
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
                     * 获取<p>升级方式</p>
                     * @return UpgradeType <p>升级方式</p>
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置<p>升级方式</p>
                     * @param _upgradeType <p>升级方式</p>
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
                     * <p>修改前版本</p>
                     */
                    std::string m_oldVersion;
                    bool m_oldVersionHasBeenSet;

                    /**
                     * <p>修改后版本</p>
                     */
                    std::string m_newVersion;
                    bool m_newVersionHasBeenSet;

                    /**
                     * <p>升级方式</p>
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBVERSIONDATA_H_
