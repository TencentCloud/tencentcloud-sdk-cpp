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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_ADDCROWDPACKINFOREQUEST_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_ADDCROWDPACKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * AddCrowdPackInfo请求参数结构体
                */
                class AddCrowdPackInfoRequest : public AbstractModel
                {
                public:
                    AddCrowdPackInfoRequest();
                    ~AddCrowdPackInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户证书
                     * @return License 商户证书
                     * 
                     */
                    std::string GetLicense() const;

                    /**
                     * 设置商户证书
                     * @param _license 商户证书
                     * 
                     */
                    void SetLicense(const std::string& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     * 
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取人群包名称
                     * @return Name 人群包名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置人群包名称
                     * @param _name 人群包名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取人群包文件名称,人群包文件必须为utf8编码，动态参数只能是汉字、数字、英文字母的组合，不能包含其他字符
                     * @return FileName 人群包文件名称,人群包文件必须为utf8编码，动态参数只能是汉字、数字、英文字母的组合，不能包含其他字符
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置人群包文件名称,人群包文件必须为utf8编码，动态参数只能是汉字、数字、英文字母的组合，不能包含其他字符
                     * @param _fileName 人群包文件名称,人群包文件必须为utf8编码，动态参数只能是汉字、数字、英文字母的组合，不能包含其他字符
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取人群包描述
                     * @return Desc 人群包描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置人群包描述
                     * @param _desc 人群包描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取已经上传好的人群包cos地址
                     * @return CosUrl 已经上传好的人群包cos地址
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置已经上传好的人群包cos地址
                     * @param _cosUrl 已经上传好的人群包cos地址
                     * 
                     */
                    void SetCosUrl(const std::string& _cosUrl);

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                    /**
                     * 获取人群包手机号数量
                     * @return PhoneNum 人群包手机号数量
                     * 
                     */
                    int64_t GetPhoneNum() const;

                    /**
                     * 设置人群包手机号数量
                     * @param _phoneNum 人群包手机号数量
                     * 
                     */
                    void SetPhoneNum(const int64_t& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                private:

                    /**
                     * 商户证书
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 人群包名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 人群包文件名称,人群包文件必须为utf8编码，动态参数只能是汉字、数字、英文字母的组合，不能包含其他字符
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 人群包描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 已经上传好的人群包cos地址
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * 人群包手机号数量
                     */
                    int64_t m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_ADDCROWDPACKINFOREQUEST_H_
