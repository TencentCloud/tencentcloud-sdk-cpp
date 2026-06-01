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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONREPLICAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONREPLICAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyFunctionReplica请求参数结构体
                */
                class ModifyFunctionReplicaRequest : public AbstractModel
                {
                public:
                    ModifyFunctionReplicaRequest();
                    ~ModifyFunctionReplicaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取函数 ID。
                     * @return FunctionId 函数 ID。
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数 ID。
                     * @param _functionId 函数 ID。
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取需要修改的边缘函数副本名称。
                     * @return ReplicaName 需要修改的边缘函数副本名称。
                     * 
                     */
                    std::string GetReplicaName() const;

                    /**
                     * 设置需要修改的边缘函数副本名称。
                     * @param _replicaName 需要修改的边缘函数副本名称。
                     * 
                     */
                    void SetReplicaName(const std::string& _replicaName);

                    /**
                     * 判断参数 ReplicaName 是否已赋值
                     * @return ReplicaName 是否已赋值
                     * 
                     */
                    bool ReplicaNameHasBeenSet() const;

                    /**
                     * 获取边缘函数副本内容，当前仅支持 JavaScript 代码，最大支持 5MB。
                     * @return Content 边缘函数副本内容，当前仅支持 JavaScript 代码，最大支持 5MB。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置边缘函数副本内容，当前仅支持 JavaScript 代码，最大支持 5MB。
                     * @param _content 边缘函数副本内容，当前仅支持 JavaScript 代码，最大支持 5MB。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取边缘函数副本描述。最大支持 50 个字符。
                     * @return Remark 边缘函数副本描述。最大支持 50 个字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置边缘函数副本描述。最大支持 50 个字符。
                     * @param _remark 边缘函数副本描述。最大支持 50 个字符。
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
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 函数 ID。
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 需要修改的边缘函数副本名称。
                     */
                    std::string m_replicaName;
                    bool m_replicaNameHasBeenSet;

                    /**
                     * 边缘函数副本内容，当前仅支持 JavaScript 代码，最大支持 5MB。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 边缘函数副本描述。最大支持 50 个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONREPLICAREQUEST_H_
