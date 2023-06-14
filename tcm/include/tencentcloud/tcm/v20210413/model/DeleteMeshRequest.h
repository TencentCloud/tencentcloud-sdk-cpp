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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_DELETEMESHREQUEST_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_DELETEMESHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * DeleteMesh请求参数结构体
                */
                class DeleteMeshRequest : public AbstractModel
                {
                public:
                    DeleteMeshRequest();
                    ~DeleteMeshRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要删除的MeshId
                     * @return MeshId 需要删除的MeshId
                     * 
                     */
                    std::string GetMeshId() const;

                    /**
                     * 设置需要删除的MeshId
                     * @param _meshId 需要删除的MeshId
                     * 
                     */
                    void SetMeshId(const std::string& _meshId);

                    /**
                     * 判断参数 MeshId 是否已赋值
                     * @return MeshId 是否已赋值
                     * 
                     */
                    bool MeshIdHasBeenSet() const;

                    /**
                     * 获取CLS组件是否被删除
                     * @return NeedDeleteCLS CLS组件是否被删除
                     * 
                     */
                    bool GetNeedDeleteCLS() const;

                    /**
                     * 设置CLS组件是否被删除
                     * @param _needDeleteCLS CLS组件是否被删除
                     * 
                     */
                    void SetNeedDeleteCLS(const bool& _needDeleteCLS);

                    /**
                     * 判断参数 NeedDeleteCLS 是否已赋值
                     * @return NeedDeleteCLS 是否已赋值
                     * 
                     */
                    bool NeedDeleteCLSHasBeenSet() const;

                    /**
                     * 获取TMP组件是否被删除
                     * @return NeedDeleteTMP TMP组件是否被删除
                     * 
                     */
                    bool GetNeedDeleteTMP() const;

                    /**
                     * 设置TMP组件是否被删除
                     * @param _needDeleteTMP TMP组件是否被删除
                     * 
                     */
                    void SetNeedDeleteTMP(const bool& _needDeleteTMP);

                    /**
                     * 判断参数 NeedDeleteTMP 是否已赋值
                     * @return NeedDeleteTMP 是否已赋值
                     * 
                     */
                    bool NeedDeleteTMPHasBeenSet() const;

                    /**
                     * 获取APM组件是否被删除
                     * @return NeedDeleteAPM APM组件是否被删除
                     * 
                     */
                    bool GetNeedDeleteAPM() const;

                    /**
                     * 设置APM组件是否被删除
                     * @param _needDeleteAPM APM组件是否被删除
                     * 
                     */
                    void SetNeedDeleteAPM(const bool& _needDeleteAPM);

                    /**
                     * 判断参数 NeedDeleteAPM 是否已赋值
                     * @return NeedDeleteAPM 是否已赋值
                     * 
                     */
                    bool NeedDeleteAPMHasBeenSet() const;

                    /**
                     * 获取Grafana组件是否被删除
                     * @return NeedDeleteGrafana Grafana组件是否被删除
                     * 
                     */
                    bool GetNeedDeleteGrafana() const;

                    /**
                     * 设置Grafana组件是否被删除
                     * @param _needDeleteGrafana Grafana组件是否被删除
                     * 
                     */
                    void SetNeedDeleteGrafana(const bool& _needDeleteGrafana);

                    /**
                     * 判断参数 NeedDeleteGrafana 是否已赋值
                     * @return NeedDeleteGrafana 是否已赋值
                     * 
                     */
                    bool NeedDeleteGrafanaHasBeenSet() const;

                private:

                    /**
                     * 需要删除的MeshId
                     */
                    std::string m_meshId;
                    bool m_meshIdHasBeenSet;

                    /**
                     * CLS组件是否被删除
                     */
                    bool m_needDeleteCLS;
                    bool m_needDeleteCLSHasBeenSet;

                    /**
                     * TMP组件是否被删除
                     */
                    bool m_needDeleteTMP;
                    bool m_needDeleteTMPHasBeenSet;

                    /**
                     * APM组件是否被删除
                     */
                    bool m_needDeleteAPM;
                    bool m_needDeleteAPMHasBeenSet;

                    /**
                     * Grafana组件是否被删除
                     */
                    bool m_needDeleteGrafana;
                    bool m_needDeleteGrafanaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_DELETEMESHREQUEST_H_
