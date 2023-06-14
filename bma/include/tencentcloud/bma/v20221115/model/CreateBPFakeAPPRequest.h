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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEAPPREQUEST_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * CreateBPFakeAPP请求参数结构体
                */
                class CreateBPFakeAPPRequest : public AbstractModel
                {
                public:
                    CreateBPFakeAPPRequest();
                    ~CreateBPFakeAPPRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业id
                     * @return CompanyId 企业id
                     * 
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 设置企业id
                     * @param _companyId 企业id
                     * 
                     */
                    void SetCompanyId(const int64_t& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取仿冒应用名称
                     * @return FakeAPPName 仿冒应用名称
                     * 
                     */
                    std::string GetFakeAPPName() const;

                    /**
                     * 设置仿冒应用名称
                     * @param _fakeAPPName 仿冒应用名称
                     * 
                     */
                    void SetFakeAPPName(const std::string& _fakeAPPName);

                    /**
                     * 判断参数 FakeAPPName 是否已赋值
                     * @return FakeAPPName 是否已赋值
                     * 
                     */
                    bool FakeAPPNameHasBeenSet() const;

                    /**
                     * 获取仿冒来源
                     * @return APPChan 仿冒来源
                     * 
                     */
                    std::string GetAPPChan() const;

                    /**
                     * 设置仿冒来源
                     * @param _aPPChan 仿冒来源
                     * 
                     */
                    void SetAPPChan(const std::string& _aPPChan);

                    /**
                     * 判断参数 APPChan 是否已赋值
                     * @return APPChan 是否已赋值
                     * 
                     */
                    bool APPChanHasBeenSet() const;

                    /**
                     * 获取仿冒应用包名
                     * @return FakeAPPPackageName 仿冒应用包名
                     * 
                     */
                    std::string GetFakeAPPPackageName() const;

                    /**
                     * 设置仿冒应用包名
                     * @param _fakeAPPPackageName 仿冒应用包名
                     * 
                     */
                    void SetFakeAPPPackageName(const std::string& _fakeAPPPackageName);

                    /**
                     * 判断参数 FakeAPPPackageName 是否已赋值
                     * @return FakeAPPPackageName 是否已赋值
                     * 
                     */
                    bool FakeAPPPackageNameHasBeenSet() const;

                    /**
                     * 获取仿冒应用证书
                     * @return FakeAPPCert 仿冒应用证书
                     * 
                     */
                    std::string GetFakeAPPCert() const;

                    /**
                     * 设置仿冒应用证书
                     * @param _fakeAPPCert 仿冒应用证书
                     * 
                     */
                    void SetFakeAPPCert(const std::string& _fakeAPPCert);

                    /**
                     * 判断参数 FakeAPPCert 是否已赋值
                     * @return FakeAPPCert 是否已赋值
                     * 
                     */
                    bool FakeAPPCertHasBeenSet() const;

                    /**
                     * 获取仿冒应用大小
                     * @return FakeAPPSize 仿冒应用大小
                     * 
                     */
                    std::string GetFakeAPPSize() const;

                    /**
                     * 设置仿冒应用大小
                     * @param _fakeAPPSize 仿冒应用大小
                     * 
                     */
                    void SetFakeAPPSize(const std::string& _fakeAPPSize);

                    /**
                     * 判断参数 FakeAPPSize 是否已赋值
                     * @return FakeAPPSize 是否已赋值
                     * 
                     */
                    bool FakeAPPSizeHasBeenSet() const;

                    /**
                     * 获取仿冒截图
                     * @return FakeAPPSnapshots 仿冒截图
                     * 
                     */
                    std::vector<std::string> GetFakeAPPSnapshots() const;

                    /**
                     * 设置仿冒截图
                     * @param _fakeAPPSnapshots 仿冒截图
                     * 
                     */
                    void SetFakeAPPSnapshots(const std::vector<std::string>& _fakeAPPSnapshots);

                    /**
                     * 判断参数 FakeAPPSnapshots 是否已赋值
                     * @return FakeAPPSnapshots 是否已赋值
                     * 
                     */
                    bool FakeAPPSnapshotsHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Note 备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
                     * @param _note 备注
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                private:

                    /**
                     * 企业id
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 仿冒应用名称
                     */
                    std::string m_fakeAPPName;
                    bool m_fakeAPPNameHasBeenSet;

                    /**
                     * 仿冒来源
                     */
                    std::string m_aPPChan;
                    bool m_aPPChanHasBeenSet;

                    /**
                     * 仿冒应用包名
                     */
                    std::string m_fakeAPPPackageName;
                    bool m_fakeAPPPackageNameHasBeenSet;

                    /**
                     * 仿冒应用证书
                     */
                    std::string m_fakeAPPCert;
                    bool m_fakeAPPCertHasBeenSet;

                    /**
                     * 仿冒应用大小
                     */
                    std::string m_fakeAPPSize;
                    bool m_fakeAPPSizeHasBeenSet;

                    /**
                     * 仿冒截图
                     */
                    std::vector<std::string> m_fakeAPPSnapshots;
                    bool m_fakeAPPSnapshotsHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEAPPREQUEST_H_
