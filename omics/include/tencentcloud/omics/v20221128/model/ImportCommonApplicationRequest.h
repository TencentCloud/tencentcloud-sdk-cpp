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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_IMPORTCOMMONAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_IMPORTCOMMONAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * ImportCommonApplication请求参数结构体
                */
                class ImportCommonApplicationRequest : public AbstractModel
                {
                public:
                    ImportCommonApplicationRequest();
                    ~ImportCommonApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>公共应用ID</p>
                     * @return CommonAppUuid <p>公共应用ID</p>
                     * 
                     */
                    std::string GetCommonAppUuid() const;

                    /**
                     * 设置<p>公共应用ID</p>
                     * @param _commonAppUuid <p>公共应用ID</p>
                     * 
                     */
                    void SetCommonAppUuid(const std::string& _commonAppUuid);

                    /**
                     * 判断参数 CommonAppUuid 是否已赋值
                     * @return CommonAppUuid 是否已赋值
                     * 
                     */
                    bool CommonAppUuidHasBeenSet() const;

                    /**
                     * 获取<p>公共应用重命名</p>
                     * @return CommonAppNewName <p>公共应用重命名</p>
                     * 
                     */
                    std::string GetCommonAppNewName() const;

                    /**
                     * 设置<p>公共应用重命名</p>
                     * @param _commonAppNewName <p>公共应用重命名</p>
                     * 
                     */
                    void SetCommonAppNewName(const std::string& _commonAppNewName);

                    /**
                     * 判断参数 CommonAppNewName 是否已赋值
                     * @return CommonAppNewName 是否已赋值
                     * 
                     */
                    bool CommonAppNewNameHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>公共应用类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     * @return Type <p>公共应用类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>公共应用类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     * @param _type <p>公共应用类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>NEXTFLOW版本</p>
                     * @return NextflowVersion <p>NEXTFLOW版本</p>
                     * 
                     */
                    std::string GetNextflowVersion() const;

                    /**
                     * 设置<p>NEXTFLOW版本</p>
                     * @param _nextflowVersion <p>NEXTFLOW版本</p>
                     * 
                     */
                    void SetNextflowVersion(const std::string& _nextflowVersion);

                    /**
                     * 判断参数 NextflowVersion 是否已赋值
                     * @return NextflowVersion 是否已赋值
                     * 
                     */
                    bool NextflowVersionHasBeenSet() const;

                    /**
                     * 获取<p>是否内部应用</p>
                     * @return Internal <p>是否内部应用</p>
                     * 
                     */
                    bool GetInternal() const;

                    /**
                     * 设置<p>是否内部应用</p>
                     * @param _internal <p>是否内部应用</p>
                     * 
                     */
                    void SetInternal(const bool& _internal);

                    /**
                     * 判断参数 Internal 是否已赋值
                     * @return Internal 是否已赋值
                     * 
                     */
                    bool InternalHasBeenSet() const;

                private:

                    /**
                     * <p>公共应用ID</p>
                     */
                    std::string m_commonAppUuid;
                    bool m_commonAppUuidHasBeenSet;

                    /**
                     * <p>公共应用重命名</p>
                     */
                    std::string m_commonAppNewName;
                    bool m_commonAppNewNameHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>公共应用类型</p><p>枚举值：</p><ul><li>WDL： WDL</li><li>NEXTFLOW： NEXTFLOW</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>NEXTFLOW版本</p>
                     */
                    std::string m_nextflowVersion;
                    bool m_nextflowVersionHasBeenSet;

                    /**
                     * <p>是否内部应用</p>
                     */
                    bool m_internal;
                    bool m_internalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_IMPORTCOMMONAPPLICATIONREQUEST_H_
