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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYVERSION_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询网关服务版本信息返回数据
                */
                class DescribeGatewayVersion : public AbstractModel
                {
                public:
                    DescribeGatewayVersion();
                    ~DescribeGatewayVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务名
                     * @return Name 服务名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名
                     * @param _name 服务名
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
                     * 获取服务版本
                     * @return Version 服务版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置服务版本
                     * @param _version 服务版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取服务最新版本
                     * @return LatestVersion 服务最新版本
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 设置服务最新版本
                     * @param _latestVersion 服务最新版本
                     * 
                     */
                    void SetLatestVersion(const std::string& _latestVersion);

                    /**
                     * 判断参数 LatestVersion 是否已赋值
                     * @return LatestVersion 是否已赋值
                     * 
                     */
                    bool LatestVersionHasBeenSet() const;

                    /**
                     * 获取是否需要更新
                     * @return IsUpdate 是否需要更新
                     * 
                     */
                    bool GetIsUpdate() const;

                    /**
                     * 设置是否需要更新
                     * @param _isUpdate 是否需要更新
                     * 
                     */
                    void SetIsUpdate(const bool& _isUpdate);

                    /**
                     * 判断参数 IsUpdate 是否已赋值
                     * @return IsUpdate 是否已赋值
                     * 
                     */
                    bool IsUpdateHasBeenSet() const;

                    /**
                     * 获取升级信息
                     * @return UpgradeInfo 升级信息
                     * 
                     */
                    std::vector<std::string> GetUpgradeInfo() const;

                    /**
                     * 设置升级信息
                     * @param _upgradeInfo 升级信息
                     * 
                     */
                    void SetUpgradeInfo(const std::vector<std::string>& _upgradeInfo);

                    /**
                     * 判断参数 UpgradeInfo 是否已赋值
                     * @return UpgradeInfo 是否已赋值
                     * 
                     */
                    bool UpgradeInfoHasBeenSet() const;

                private:

                    /**
                     * 服务名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 服务版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 服务最新版本
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                    /**
                     * 是否需要更新
                     */
                    bool m_isUpdate;
                    bool m_isUpdateHasBeenSet;

                    /**
                     * 升级信息
                     */
                    std::vector<std::string> m_upgradeInfo;
                    bool m_upgradeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYVERSION_H_
