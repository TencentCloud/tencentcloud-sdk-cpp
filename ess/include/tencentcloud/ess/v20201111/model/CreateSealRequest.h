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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateSeal请求参数结构体
                */
                class CreateSealRequest : public AbstractModel
                {
                public:
                    CreateSealRequest();
                    ~CreateSealRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息
                     * @return Operator 操作人信息
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息
                     * @param _operator 操作人信息
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取电子印章名字
                     * @return SealName 电子印章名字
                     * 
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置电子印章名字
                     * @param _sealName 电子印章名字
                     * 
                     */
                    void SetSealName(const std::string& _sealName);

                    /**
                     * 判断参数 SealName 是否已赋值
                     * @return SealName 是否已赋值
                     * 
                     */
                    bool SealNameHasBeenSet() const;

                    /**
                     * 获取应用相关信息
                     * @return Agent 应用相关信息
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息
                     * @param _agent 应用相关信息
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取本接口支持上传图片印章及系统直接生成印章；如果要使用系统生成印章，此值传：SealGenerateSourceSystem；如果要使用图片上传请传字段 Image
                     * @return GenerateSource 本接口支持上传图片印章及系统直接生成印章；如果要使用系统生成印章，此值传：SealGenerateSourceSystem；如果要使用图片上传请传字段 Image
                     * 
                     */
                    std::string GetGenerateSource() const;

                    /**
                     * 设置本接口支持上传图片印章及系统直接生成印章；如果要使用系统生成印章，此值传：SealGenerateSourceSystem；如果要使用图片上传请传字段 Image
                     * @param _generateSource 本接口支持上传图片印章及系统直接生成印章；如果要使用系统生成印章，此值传：SealGenerateSourceSystem；如果要使用图片上传请传字段 Image
                     * 
                     */
                    void SetGenerateSource(const std::string& _generateSource);

                    /**
                     * 判断参数 GenerateSource 是否已赋值
                     * @return GenerateSource 是否已赋值
                     * 
                     */
                    bool GenerateSourceHasBeenSet() const;

                    /**
                     * 获取电子印章类型，OFFICIAL-公章,CONTRACT-合同专用章
                     * @return SealType 电子印章类型，OFFICIAL-公章,CONTRACT-合同专用章
                     * 
                     */
                    std::string GetSealType() const;

                    /**
                     * 设置电子印章类型，OFFICIAL-公章,CONTRACT-合同专用章
                     * @param _sealType 电子印章类型，OFFICIAL-公章,CONTRACT-合同专用章
                     * 
                     */
                    void SetSealType(const std::string& _sealType);

                    /**
                     * 判断参数 SealType 是否已赋值
                     * @return SealType 是否已赋值
                     * 
                     */
                    bool SealTypeHasBeenSet() const;

                    /**
                     * 获取电子印章图片文件名称
                     * @return FileName 电子印章图片文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置电子印章图片文件名称
                     * @param _fileName 电子印章图片文件名称
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
                     * 获取电子印章图片base64编码
参数Image,FileToken或GenerateSource=SealGenerateSourceSystem三选一。
                     * @return Image 电子印章图片base64编码
参数Image,FileToken或GenerateSource=SealGenerateSourceSystem三选一。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置电子印章图片base64编码
参数Image,FileToken或GenerateSource=SealGenerateSourceSystem三选一。
                     * @param _image 电子印章图片base64编码
参数Image,FileToken或GenerateSource=SealGenerateSourceSystem三选一。
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
                     * 获取电子印章宽度,单位px
参数不再启用，系统会设置印章大小为标准尺寸。
                     * @return Width 电子印章宽度,单位px
参数不再启用，系统会设置印章大小为标准尺寸。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置电子印章宽度,单位px
参数不再启用，系统会设置印章大小为标准尺寸。
                     * @param _width 电子印章宽度,单位px
参数不再启用，系统会设置印章大小为标准尺寸。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取电子印章高度,单位px
参数不再启用，系统会设置印章大小为标准尺寸。
                     * @return Height 电子印章高度,单位px
参数不再启用，系统会设置印章大小为标准尺寸。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置电子印章高度,单位px
参数不再启用，系统会设置印章大小为标准尺寸。
                     * @param _height 电子印章高度,单位px
参数不再启用，系统会设置印章大小为标准尺寸。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取电子印章印章颜色(默认红色RED),RED-红色

系统目前只支持红色印章创建。
                     * @return Color 电子印章印章颜色(默认红色RED),RED-红色

系统目前只支持红色印章创建。
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置电子印章印章颜色(默认红色RED),RED-红色

系统目前只支持红色印章创建。
                     * @param _color 电子印章印章颜色(默认红色RED),RED-红色

系统目前只支持红色印章创建。
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取暂时不支持横向文字设置
                     * @return SealHorizontalText 暂时不支持横向文字设置
                     * 
                     */
                    std::string GetSealHorizontalText() const;

                    /**
                     * 设置暂时不支持横向文字设置
                     * @param _sealHorizontalText 暂时不支持横向文字设置
                     * 
                     */
                    void SetSealHorizontalText(const std::string& _sealHorizontalText);

                    /**
                     * 判断参数 SealHorizontalText 是否已赋值
                     * @return SealHorizontalText 是否已赋值
                     * 
                     */
                    bool SealHorizontalTextHasBeenSet() const;

                    /**
                     * 获取暂时不支持下弦文字设置
                     * @return SealChordText 暂时不支持下弦文字设置
                     * 
                     */
                    std::string GetSealChordText() const;

                    /**
                     * 设置暂时不支持下弦文字设置
                     * @param _sealChordText 暂时不支持下弦文字设置
                     * 
                     */
                    void SetSealChordText(const std::string& _sealChordText);

                    /**
                     * 判断参数 SealChordText 是否已赋值
                     * @return SealChordText 是否已赋值
                     * 
                     */
                    bool SealChordTextHasBeenSet() const;

                    /**
                     * 获取系统生成的印章只支持STAR
                     * @return SealCentralType 系统生成的印章只支持STAR
                     * 
                     */
                    std::string GetSealCentralType() const;

                    /**
                     * 设置系统生成的印章只支持STAR
                     * @param _sealCentralType 系统生成的印章只支持STAR
                     * 
                     */
                    void SetSealCentralType(const std::string& _sealCentralType);

                    /**
                     * 判断参数 SealCentralType 是否已赋值
                     * @return SealCentralType 是否已赋值
                     * 
                     */
                    bool SealCentralTypeHasBeenSet() const;

                    /**
                     * 获取通过文件上传时，服务端生成的电子印章上传图片的token

                     * @return FileToken 通过文件上传时，服务端生成的电子印章上传图片的token

                     * 
                     */
                    std::string GetFileToken() const;

                    /**
                     * 设置通过文件上传时，服务端生成的电子印章上传图片的token

                     * @param _fileToken 通过文件上传时，服务端生成的电子印章上传图片的token

                     * 
                     */
                    void SetFileToken(const std::string& _fileToken);

                    /**
                     * 判断参数 FileToken 是否已赋值
                     * @return FileToken 是否已赋值
                     * 
                     */
                    bool FileTokenHasBeenSet() const;

                private:

                    /**
                     * 操作人信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 电子印章名字
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * 应用相关信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 本接口支持上传图片印章及系统直接生成印章；如果要使用系统生成印章，此值传：SealGenerateSourceSystem；如果要使用图片上传请传字段 Image
                     */
                    std::string m_generateSource;
                    bool m_generateSourceHasBeenSet;

                    /**
                     * 电子印章类型，OFFICIAL-公章,CONTRACT-合同专用章
                     */
                    std::string m_sealType;
                    bool m_sealTypeHasBeenSet;

                    /**
                     * 电子印章图片文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 电子印章图片base64编码
参数Image,FileToken或GenerateSource=SealGenerateSourceSystem三选一。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 电子印章宽度,单位px
参数不再启用，系统会设置印章大小为标准尺寸。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 电子印章高度,单位px
参数不再启用，系统会设置印章大小为标准尺寸。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 电子印章印章颜色(默认红色RED),RED-红色

系统目前只支持红色印章创建。
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 暂时不支持横向文字设置
                     */
                    std::string m_sealHorizontalText;
                    bool m_sealHorizontalTextHasBeenSet;

                    /**
                     * 暂时不支持下弦文字设置
                     */
                    std::string m_sealChordText;
                    bool m_sealChordTextHasBeenSet;

                    /**
                     * 系统生成的印章只支持STAR
                     */
                    std::string m_sealCentralType;
                    bool m_sealCentralTypeHasBeenSet;

                    /**
                     * 通过文件上传时，服务端生成的电子印章上传图片的token

                     */
                    std::string m_fileToken;
                    bool m_fileTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATESEALREQUEST_H_
