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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINTSHAREACROSSACCOUNTINFO_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINTSHAREACROSSACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 镜像跨账号共享信息。
                */
                class BlueprintShareAcrossAccountInfo : public AbstractModel
                {
                public:
                    BlueprintShareAcrossAccountInfo();
                    ~BlueprintShareAcrossAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像ID。
                     * @return BlueprintId 镜像ID。
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置镜像ID。
                     * @param _blueprintId 镜像ID。
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取镜像共享的账户ID。
                     * @return AccountId 镜像共享的账户ID。
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置镜像共享的账户ID。
                     * @param _accountId 镜像共享的账户ID。
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取镜像共享时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @return CreatedTime 镜像共享时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 格式为： YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置镜像共享时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @param _createdTime 镜像共享时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 格式为： YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * 镜像ID。
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * 镜像共享的账户ID。
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 镜像共享时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 格式为： YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINTSHAREACROSSACCOUNTINFO_H_
