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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/UpdateRecordBackupTemplateModify.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * UpdateRecordBackupTemplate请求参数结构体
                */
                class UpdateRecordBackupTemplateRequest : public AbstractModel
                {
                public:
                    UpdateRecordBackupTemplateRequest();
                    ~UpdateRecordBackupTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板ID（从查询录像上云模板列表接口ListRecordBackupTemplates中获取）
                     * @return TemplateId 模板ID（从查询录像上云模板列表接口ListRecordBackupTemplates中获取）
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID（从查询录像上云模板列表接口ListRecordBackupTemplates中获取）
                     * @param _templateId 模板ID（从查询录像上云模板列表接口ListRecordBackupTemplates中获取）
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取修改录像上云模板数据
                     * @return Mod 修改录像上云模板数据
                     * 
                     */
                    UpdateRecordBackupTemplateModify GetMod() const;

                    /**
                     * 设置修改录像上云模板数据
                     * @param _mod 修改录像上云模板数据
                     * 
                     */
                    void SetMod(const UpdateRecordBackupTemplateModify& _mod);

                    /**
                     * 判断参数 Mod 是否已赋值
                     * @return Mod 是否已赋值
                     * 
                     */
                    bool ModHasBeenSet() const;

                private:

                    /**
                     * 模板ID（从查询录像上云模板列表接口ListRecordBackupTemplates中获取）
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 修改录像上云模板数据
                     */
                    UpdateRecordBackupTemplateModify m_mod;
                    bool m_modHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPTEMPLATEREQUEST_H_
