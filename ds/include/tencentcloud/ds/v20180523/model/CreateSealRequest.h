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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_CREATESEALREQUEST_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_CREATESEALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
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
                     * 获取模块名SealMng
                     * @return Module 模块名SealMng
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名SealMng
                     * @param _module 模块名SealMng
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名CreateSeal
                     * @return Operation 操作名CreateSeal
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名CreateSeal
                     * @param _operation 操作名CreateSeal
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取帐号ID
                     * @return AccountResId 帐号ID
                     * 
                     */
                    std::string GetAccountResId() const;

                    /**
                     * 设置帐号ID
                     * @param _accountResId 帐号ID
                     * 
                     */
                    void SetAccountResId(const std::string& _accountResId);

                    /**
                     * 判断参数 AccountResId 是否已赋值
                     * @return AccountResId 是否已赋值
                     * 
                     */
                    bool AccountResIdHasBeenSet() const;

                    /**
                     * 获取签章链接，图片必须为png格式
                     * @return ImgUrl 签章链接，图片必须为png格式
                     * 
                     */
                    std::string GetImgUrl() const;

                    /**
                     * 设置签章链接，图片必须为png格式
                     * @param _imgUrl 签章链接，图片必须为png格式
                     * 
                     */
                    void SetImgUrl(const std::string& _imgUrl);

                    /**
                     * 判断参数 ImgUrl 是否已赋值
                     * @return ImgUrl 是否已赋值
                     * 
                     */
                    bool ImgUrlHasBeenSet() const;

                    /**
                     * 获取图片数据，base64编码
                     * @return ImgData 图片数据，base64编码
                     * 
                     */
                    std::string GetImgData() const;

                    /**
                     * 设置图片数据，base64编码
                     * @param _imgData 图片数据，base64编码
                     * 
                     */
                    void SetImgData(const std::string& _imgData);

                    /**
                     * 判断参数 ImgData 是否已赋值
                     * @return ImgData 是否已赋值
                     * 
                     */
                    bool ImgDataHasBeenSet() const;

                private:

                    /**
                     * 模块名SealMng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名CreateSeal
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 帐号ID
                     */
                    std::string m_accountResId;
                    bool m_accountResIdHasBeenSet;

                    /**
                     * 签章链接，图片必须为png格式
                     */
                    std::string m_imgUrl;
                    bool m_imgUrlHasBeenSet;

                    /**
                     * 图片数据，base64编码
                     */
                    std::string m_imgData;
                    bool m_imgDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_CREATESEALREQUEST_H_
