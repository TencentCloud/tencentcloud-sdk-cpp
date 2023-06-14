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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEURLREQUEST_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEURLREQUEST_H_

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
                * CreateBPFakeURL请求参数结构体
                */
                class CreateBPFakeURLRequest : public AbstractModel
                {
                public:
                    CreateBPFakeURLRequest();
                    ~CreateBPFakeURLRequest() = default;
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
                     * 获取仿冒网址
                     * @return FakeURL 仿冒网址
                     * 
                     */
                    std::string GetFakeURL() const;

                    /**
                     * 设置仿冒网址
                     * @param _fakeURL 仿冒网址
                     * 
                     */
                    void SetFakeURL(const std::string& _fakeURL);

                    /**
                     * 判断参数 FakeURL 是否已赋值
                     * @return FakeURL 是否已赋值
                     * 
                     */
                    bool FakeURLHasBeenSet() const;

                    /**
                     * 获取仿冒网址截图
                     * @return FakeURLSnapshots 仿冒网址截图
                     * 
                     */
                    std::vector<std::string> GetFakeURLSnapshots() const;

                    /**
                     * 设置仿冒网址截图
                     * @param _fakeURLSnapshots 仿冒网址截图
                     * 
                     */
                    void SetFakeURLSnapshots(const std::vector<std::string>& _fakeURLSnapshots);

                    /**
                     * 判断参数 FakeURLSnapshots 是否已赋值
                     * @return FakeURLSnapshots 是否已赋值
                     * 
                     */
                    bool FakeURLSnapshotsHasBeenSet() const;

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
                     * 仿冒网址
                     */
                    std::string m_fakeURL;
                    bool m_fakeURLHasBeenSet;

                    /**
                     * 仿冒网址截图
                     */
                    std::vector<std::string> m_fakeURLSnapshots;
                    bool m_fakeURLSnapshotsHasBeenSet;

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

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEURLREQUEST_H_
