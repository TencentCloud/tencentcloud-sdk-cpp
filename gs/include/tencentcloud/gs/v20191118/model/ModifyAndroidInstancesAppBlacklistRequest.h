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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESAPPBLACKLISTREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESAPPBLACKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * ModifyAndroidInstancesAppBlacklist请求参数结构体
                */
                class ModifyAndroidInstancesAppBlacklistRequest : public AbstractModel
                {
                public:
                    ModifyAndroidInstancesAppBlacklistRequest();
                    ~ModifyAndroidInstancesAppBlacklistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID列表，数量上限100
                     * @return AndroidInstanceIds 实例ID列表，数量上限100
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置实例ID列表，数量上限100
                     * @param _androidInstanceIds 实例ID列表，数量上限100
                     * 
                     */
                    void SetAndroidInstanceIds(const std::vector<std::string>& _androidInstanceIds);

                    /**
                     * 判断参数 AndroidInstanceIds 是否已赋值
                     * @return AndroidInstanceIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdsHasBeenSet() const;

                    /**
                     * 获取应用列表
                     * @return AppList 应用列表
                     * 
                     */
                    std::vector<std::string> GetAppList() const;

                    /**
                     * 设置应用列表
                     * @param _appList 应用列表
                     * 
                     */
                    void SetAppList(const std::vector<std::string>& _appList);

                    /**
                     * 判断参数 AppList 是否已赋值
                     * @return AppList 是否已赋值
                     * 
                     */
                    bool AppListHasBeenSet() const;

                    /**
                     * 获取ADD、REMOVE、CLEAR
                     * @return Operation ADD、REMOVE、CLEAR
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置ADD、REMOVE、CLEAR
                     * @param _operation ADD、REMOVE、CLEAR
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * 实例ID列表，数量上限100
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 应用列表
                     */
                    std::vector<std::string> m_appList;
                    bool m_appListHasBeenSet;

                    /**
                     * ADD、REMOVE、CLEAR
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESAPPBLACKLISTREQUEST_H_
