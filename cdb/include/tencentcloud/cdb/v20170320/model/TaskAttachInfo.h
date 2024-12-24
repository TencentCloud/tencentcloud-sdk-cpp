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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_TASKATTACHINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_TASKATTACHINFO_H_

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
                * 任务列表中的部分任务支持特定的附加信息
                */
                class TaskAttachInfo : public AbstractModel
                {
                public:
                    TaskAttachInfo();
                    ~TaskAttachInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取升级任务：
”FastUpgradeStatus“：表示升级类型。1-原地升级；0-普通升级。
                     * @return AttachKey 升级任务：
”FastUpgradeStatus“：表示升级类型。1-原地升级；0-普通升级。
                     * 
                     */
                    std::string GetAttachKey() const;

                    /**
                     * 设置升级任务：
”FastUpgradeStatus“：表示升级类型。1-原地升级；0-普通升级。
                     * @param _attachKey 升级任务：
”FastUpgradeStatus“：表示升级类型。1-原地升级；0-普通升级。
                     * 
                     */
                    void SetAttachKey(const std::string& _attachKey);

                    /**
                     * 判断参数 AttachKey 是否已赋值
                     * @return AttachKey 是否已赋值
                     * 
                     */
                    bool AttachKeyHasBeenSet() const;

                    /**
                     * 获取升级任务：
”FastUpgradeStatus“：表示升级类型。1-原地升级；0-普通升级。
                     * @return AttachValue 升级任务：
”FastUpgradeStatus“：表示升级类型。1-原地升级；0-普通升级。
                     * 
                     */
                    std::string GetAttachValue() const;

                    /**
                     * 设置升级任务：
”FastUpgradeStatus“：表示升级类型。1-原地升级；0-普通升级。
                     * @param _attachValue 升级任务：
”FastUpgradeStatus“：表示升级类型。1-原地升级；0-普通升级。
                     * 
                     */
                    void SetAttachValue(const std::string& _attachValue);

                    /**
                     * 判断参数 AttachValue 是否已赋值
                     * @return AttachValue 是否已赋值
                     * 
                     */
                    bool AttachValueHasBeenSet() const;

                private:

                    /**
                     * 升级任务：
”FastUpgradeStatus“：表示升级类型。1-原地升级；0-普通升级。
                     */
                    std::string m_attachKey;
                    bool m_attachKeyHasBeenSet;

                    /**
                     * 升级任务：
”FastUpgradeStatus“：表示升级类型。1-原地升级；0-普通升级。
                     */
                    std::string m_attachValue;
                    bool m_attachValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_TASKATTACHINFO_H_
