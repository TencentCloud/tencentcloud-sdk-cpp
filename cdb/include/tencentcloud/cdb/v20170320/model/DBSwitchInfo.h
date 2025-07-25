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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DBSWITCHINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DBSWITCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 云数据库切换记录
                */
                class DBSwitchInfo : public AbstractModel
                {
                public:
                    DBSwitchInfo();
                    ~DBSwitchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取切换时间，格式为：2017-09-03 01:34:31
                     * @return SwitchTime 切换时间，格式为：2017-09-03 01:34:31
                     * 
                     */
                    std::string GetSwitchTime() const;

                    /**
                     * 设置切换时间，格式为：2017-09-03 01:34:31
                     * @param _switchTime 切换时间，格式为：2017-09-03 01:34:31
                     * 
                     */
                    void SetSwitchTime(const std::string& _switchTime);

                    /**
                     * 判断参数 SwitchTime 是否已赋值
                     * @return SwitchTime 是否已赋值
                     * 
                     */
                    bool SwitchTimeHasBeenSet() const;

                    /**
                     * 获取切换类型，可能的返回值为：TRANSFER - 数据迁移；MASTER2SLAVE - 主备切换；RECOVERY - 主从恢复
                     * @return SwitchType 切换类型，可能的返回值为：TRANSFER - 数据迁移；MASTER2SLAVE - 主备切换；RECOVERY - 主从恢复
                     * 
                     */
                    std::string GetSwitchType() const;

                    /**
                     * 设置切换类型，可能的返回值为：TRANSFER - 数据迁移；MASTER2SLAVE - 主备切换；RECOVERY - 主从恢复
                     * @param _switchType 切换类型，可能的返回值为：TRANSFER - 数据迁移；MASTER2SLAVE - 主备切换；RECOVERY - 主从恢复
                     * 
                     */
                    void SetSwitchType(const std::string& _switchType);

                    /**
                     * 判断参数 SwitchType 是否已赋值
                     * @return SwitchType 是否已赋值
                     * 
                     */
                    bool SwitchTypeHasBeenSet() const;

                private:

                    /**
                     * 切换时间，格式为：2017-09-03 01:34:31
                     */
                    std::string m_switchTime;
                    bool m_switchTimeHasBeenSet;

                    /**
                     * 切换类型，可能的返回值为：TRANSFER - 数据迁移；MASTER2SLAVE - 主备切换；RECOVERY - 主从恢复
                     */
                    std::string m_switchType;
                    bool m_switchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DBSWITCHINFO_H_
