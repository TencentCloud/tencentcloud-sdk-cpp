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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_EHOCRREQUEST_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_EHOCRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * EHOCR请求参数结构体
                */
                class EHOCRRequest : public AbstractModel
                {
                public:
                    EHOCRRequest();
                    ~EHOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片所在的url或base64编码后的图像数据，依据InputType而定
                     * @return Image 图片所在的url或base64编码后的图像数据，依据InputType而定
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片所在的url或base64编码后的图像数据，依据InputType而定
                     * @param _image 图片所在的url或base64编码后的图像数据，依据InputType而定
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取输出图片类型，0 表示 Image 字段是图片所在的 url，1 表示 Image 字段是 base64 编码后的图像数据
                     * @return InputType 输出图片类型，0 表示 Image 字段是图片所在的 url，1 表示 Image 字段是 base64 编码后的图像数据
                     * 
                     */
                    int64_t GetInputType() const;

                    /**
                     * 设置输出图片类型，0 表示 Image 字段是图片所在的 url，1 表示 Image 字段是 base64 编码后的图像数据
                     * @param _inputType 输出图片类型，0 表示 Image 字段是图片所在的 url，1 表示 Image 字段是 base64 编码后的图像数据
                     * 
                     */
                    void SetInputType(const int64_t& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数（暂时无需传入）。
                     * @return EccAppid 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数（暂时无需传入）。
                     * 
                     */
                    std::string GetEccAppid() const;

                    /**
                     * 设置业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数（暂时无需传入）。
                     * @param _eccAppid 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数（暂时无需传入）。
                     * 
                     */
                    void SetEccAppid(const std::string& _eccAppid);

                    /**
                     * 判断参数 EccAppid 是否已赋值
                     * @return EccAppid 是否已赋值
                     * 
                     */
                    bool EccAppidHasBeenSet() const;

                    /**
                     * 获取图像识别唯一标识，一次识别一个 SessionId，使用识别功能时 SessionId 可用于使用文本批改接口，此时按图像批改价格收费；如使用文本批改接口时没有传入 SessionId，则需要收取文本批改的费用
                     * @return SessionId 图像识别唯一标识，一次识别一个 SessionId，使用识别功能时 SessionId 可用于使用文本批改接口，此时按图像批改价格收费；如使用文本批改接口时没有传入 SessionId，则需要收取文本批改的费用
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置图像识别唯一标识，一次识别一个 SessionId，使用识别功能时 SessionId 可用于使用文本批改接口，此时按图像批改价格收费；如使用文本批改接口时没有传入 SessionId，则需要收取文本批改的费用
                     * @param _sessionId 图像识别唯一标识，一次识别一个 SessionId，使用识别功能时 SessionId 可用于使用文本批改接口，此时按图像批改价格收费；如使用文本批改接口时没有传入 SessionId，则需要收取文本批改的费用
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取服务类型，0：“图像识别”，只返回识别结果，1：“图像批改”，同时返回识别结果与批改结果。默认为 0
                     * @return ServerType 服务类型，0：“图像识别”，只返回识别结果，1：“图像批改”，同时返回识别结果与批改结果。默认为 0
                     * 
                     */
                    int64_t GetServerType() const;

                    /**
                     * 设置服务类型，0：“图像识别”，只返回识别结果，1：“图像批改”，同时返回识别结果与批改结果。默认为 0
                     * @param _serverType 服务类型，0：“图像识别”，只返回识别结果，1：“图像批改”，同时返回识别结果与批改结果。默认为 0
                     * 
                     */
                    void SetServerType(const int64_t& _serverType);

                    /**
                     * 判断参数 ServerType 是否已赋值
                     * @return ServerType 是否已赋值
                     * 
                     */
                    bool ServerTypeHasBeenSet() const;

                    /**
                     * 获取作文题目，可选参数
                     * @return Title 作文题目，可选参数
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置作文题目，可选参数
                     * @param _title 作文题目，可选参数
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取年级标准， 默认以 cet4 为标准，取值与意义如下：elementary 小学，grade7 grade8 grade9分别对应初一，初二，初三。 grade10 grade11 grade12 分别对应高一，高二，高三，以及 cet4 和 cet6 分别表示 英语4级和6级。
                     * @return Grade 年级标准， 默认以 cet4 为标准，取值与意义如下：elementary 小学，grade7 grade8 grade9分别对应初一，初二，初三。 grade10 grade11 grade12 分别对应高一，高二，高三，以及 cet4 和 cet6 分别表示 英语4级和6级。
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置年级标准， 默认以 cet4 为标准，取值与意义如下：elementary 小学，grade7 grade8 grade9分别对应初一，初二，初三。 grade10 grade11 grade12 分别对应高一，高二，高三，以及 cet4 和 cet6 分别表示 英语4级和6级。
                     * @param _grade 年级标准， 默认以 cet4 为标准，取值与意义如下：elementary 小学，grade7 grade8 grade9分别对应初一，初二，初三。 grade10 grade11 grade12 分别对应高一，高二，高三，以及 cet4 和 cet6 分别表示 英语4级和6级。
                     * 
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     * 
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取作文提纲，可选参数，作文的写作要求。
                     * @return Requirement 作文提纲，可选参数，作文的写作要求。
                     * 
                     */
                    std::string GetRequirement() const;

                    /**
                     * 设置作文提纲，可选参数，作文的写作要求。
                     * @param _requirement 作文提纲，可选参数，作文的写作要求。
                     * 
                     */
                    void SetRequirement(const std::string& _requirement);

                    /**
                     * 判断参数 Requirement 是否已赋值
                     * @return Requirement 是否已赋值
                     * 
                     */
                    bool RequirementHasBeenSet() const;

                    /**
                     * 获取范文标题，可选参数，本接口可以依据提供的范文对作文进行评分。
                     * @return ModelTitle 范文标题，可选参数，本接口可以依据提供的范文对作文进行评分。
                     * 
                     */
                    std::string GetModelTitle() const;

                    /**
                     * 设置范文标题，可选参数，本接口可以依据提供的范文对作文进行评分。
                     * @param _modelTitle 范文标题，可选参数，本接口可以依据提供的范文对作文进行评分。
                     * 
                     */
                    void SetModelTitle(const std::string& _modelTitle);

                    /**
                     * 判断参数 ModelTitle 是否已赋值
                     * @return ModelTitle 是否已赋值
                     * 
                     */
                    bool ModelTitleHasBeenSet() const;

                    /**
                     * 获取范文内容，可选参数，同上，范文的正文部分。
                     * @return ModelContent 范文内容，可选参数，同上，范文的正文部分。
                     * 
                     */
                    std::string GetModelContent() const;

                    /**
                     * 设置范文内容，可选参数，同上，范文的正文部分。
                     * @param _modelContent 范文内容，可选参数，同上，范文的正文部分。
                     * 
                     */
                    void SetModelContent(const std::string& _modelContent);

                    /**
                     * 判断参数 ModelContent 是否已赋值
                     * @return ModelContent 是否已赋值
                     * 
                     */
                    bool ModelContentHasBeenSet() const;

                    /**
                     * 获取异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     * @return IsAsync 异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     * 
                     */
                    int64_t GetIsAsync() const;

                    /**
                     * 设置异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     * @param _isAsync 异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     * 
                     */
                    void SetIsAsync(const int64_t& _isAsync);

                    /**
                     * 判断参数 IsAsync 是否已赋值
                     * @return IsAsync 是否已赋值
                     * 
                     */
                    bool IsAsyncHasBeenSet() const;

                private:

                    /**
                     * 图片所在的url或base64编码后的图像数据，依据InputType而定
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 输出图片类型，0 表示 Image 字段是图片所在的 url，1 表示 Image 字段是 base64 编码后的图像数据
                     */
                    int64_t m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数（暂时无需传入）。
                     */
                    std::string m_eccAppid;
                    bool m_eccAppidHasBeenSet;

                    /**
                     * 图像识别唯一标识，一次识别一个 SessionId，使用识别功能时 SessionId 可用于使用文本批改接口，此时按图像批改价格收费；如使用文本批改接口时没有传入 SessionId，则需要收取文本批改的费用
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 服务类型，0：“图像识别”，只返回识别结果，1：“图像批改”，同时返回识别结果与批改结果。默认为 0
                     */
                    int64_t m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * 作文题目，可选参数
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 年级标准， 默认以 cet4 为标准，取值与意义如下：elementary 小学，grade7 grade8 grade9分别对应初一，初二，初三。 grade10 grade11 grade12 分别对应高一，高二，高三，以及 cet4 和 cet6 分别表示 英语4级和6级。
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 作文提纲，可选参数，作文的写作要求。
                     */
                    std::string m_requirement;
                    bool m_requirementHasBeenSet;

                    /**
                     * 范文标题，可选参数，本接口可以依据提供的范文对作文进行评分。
                     */
                    std::string m_modelTitle;
                    bool m_modelTitleHasBeenSet;

                    /**
                     * 范文内容，可选参数，同上，范文的正文部分。
                     */
                    std::string m_modelContent;
                    bool m_modelContentHasBeenSet;

                    /**
                     * 异步模式标识，0：同步模式，1：异步模式。默认为同步模式
                     */
                    int64_t m_isAsync;
                    bool m_isAsyncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_EHOCRREQUEST_H_
