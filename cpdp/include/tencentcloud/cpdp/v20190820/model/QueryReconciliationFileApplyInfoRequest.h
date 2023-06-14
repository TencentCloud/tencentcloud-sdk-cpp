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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYRECONCILIATIONFILEAPPLYINFOREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYRECONCILIATIONFILEAPPLYINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryReconciliationFileApplyInfo请求参数结构体
                */
                class QueryReconciliationFileApplyInfoRequest : public AbstractModel
                {
                public:
                    QueryReconciliationFileApplyInfoRequest();
                    ~QueryReconciliationFileApplyInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取申请对账文件的任务ID。
                     * @return ApplyFileId 申请对账文件的任务ID。
                     * 
                     */
                    std::string GetApplyFileId() const;

                    /**
                     * 设置申请对账文件的任务ID。
                     * @param _applyFileId 申请对账文件的任务ID。
                     * 
                     */
                    void SetApplyFileId(const std::string& _applyFileId);

                    /**
                     * 判断参数 ApplyFileId 是否已赋值
                     * @return ApplyFileId 是否已赋值
                     * 
                     */
                    bool ApplyFileIdHasBeenSet() const;

                    /**
                     * 获取环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     * @return MidasEnvironment 环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     * @param _midasEnvironment 环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                private:

                    /**
                     * 申请对账文件的任务ID。
                     */
                    std::string m_applyFileId;
                    bool m_applyFileIdHasBeenSet;

                    /**
                     * 环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYRECONCILIATIONFILEAPPLYINFOREQUEST_H_
