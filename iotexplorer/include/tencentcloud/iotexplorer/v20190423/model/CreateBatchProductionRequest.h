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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEBATCHPRODUCTIONREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEBATCHPRODUCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CreateBatchProduction请求参数结构体
                */
                class CreateBatchProductionRequest : public AbstractModel
                {
                public:
                    CreateBatchProductionRequest();
                    ~CreateBatchProductionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取烧录方式，0为直接烧录，1为动态注册。
                     * @return BurnMethod 烧录方式，0为直接烧录，1为动态注册。
                     * 
                     */
                    int64_t GetBurnMethod() const;

                    /**
                     * 设置烧录方式，0为直接烧录，1为动态注册。
                     * @param _burnMethod 烧录方式，0为直接烧录，1为动态注册。
                     * 
                     */
                    void SetBurnMethod(const int64_t& _burnMethod);

                    /**
                     * 判断参数 BurnMethod 是否已赋值
                     * @return BurnMethod 是否已赋值
                     * 
                     */
                    bool BurnMethodHasBeenSet() const;

                    /**
                     * 获取生成方式，0为系统生成，1为文件上传。
                     * @return GenerationMethod 生成方式，0为系统生成，1为文件上传。
                     * 
                     */
                    int64_t GetGenerationMethod() const;

                    /**
                     * 设置生成方式，0为系统生成，1为文件上传。
                     * @param _generationMethod 生成方式，0为系统生成，1为文件上传。
                     * 
                     */
                    void SetGenerationMethod(const int64_t& _generationMethod);

                    /**
                     * 判断参数 GenerationMethod 是否已赋值
                     * @return GenerationMethod 是否已赋值
                     * 
                     */
                    bool GenerationMethodHasBeenSet() const;

                    /**
                     * 获取文件上传URL，用于文件上传时填写。
                     * @return UploadUrl 文件上传URL，用于文件上传时填写。
                     * 
                     */
                    std::string GetUploadUrl() const;

                    /**
                     * 设置文件上传URL，用于文件上传时填写。
                     * @param _uploadUrl 文件上传URL，用于文件上传时填写。
                     * 
                     */
                    void SetUploadUrl(const std::string& _uploadUrl);

                    /**
                     * 判断参数 UploadUrl 是否已赋值
                     * @return UploadUrl 是否已赋值
                     * 
                     */
                    bool UploadUrlHasBeenSet() const;

                    /**
                     * 获取量产数量，用于系统生成时填写。
                     * @return BatchCnt 量产数量，用于系统生成时填写。
                     * 
                     */
                    int64_t GetBatchCnt() const;

                    /**
                     * 设置量产数量，用于系统生成时填写。
                     * @param _batchCnt 量产数量，用于系统生成时填写。
                     * 
                     */
                    void SetBatchCnt(const int64_t& _batchCnt);

                    /**
                     * 判断参数 BatchCnt 是否已赋值
                     * @return BatchCnt 是否已赋值
                     * 
                     */
                    bool BatchCntHasBeenSet() const;

                    /**
                     * 获取是否生成二维码,0为不生成，1为生成。
                     * @return GenerationQRCode 是否生成二维码,0为不生成，1为生成。
                     * 
                     */
                    int64_t GetGenerationQRCode() const;

                    /**
                     * 设置是否生成二维码,0为不生成，1为生成。
                     * @param _generationQRCode 是否生成二维码,0为不生成，1为生成。
                     * 
                     */
                    void SetGenerationQRCode(const int64_t& _generationQRCode);

                    /**
                     * 判断参数 GenerationQRCode 是否已赋值
                     * @return GenerationQRCode 是否已赋值
                     * 
                     */
                    bool GenerationQRCodeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 烧录方式，0为直接烧录，1为动态注册。
                     */
                    int64_t m_burnMethod;
                    bool m_burnMethodHasBeenSet;

                    /**
                     * 生成方式，0为系统生成，1为文件上传。
                     */
                    int64_t m_generationMethod;
                    bool m_generationMethodHasBeenSet;

                    /**
                     * 文件上传URL，用于文件上传时填写。
                     */
                    std::string m_uploadUrl;
                    bool m_uploadUrlHasBeenSet;

                    /**
                     * 量产数量，用于系统生成时填写。
                     */
                    int64_t m_batchCnt;
                    bool m_batchCntHasBeenSet;

                    /**
                     * 是否生成二维码,0为不生成，1为生成。
                     */
                    int64_t m_generationQRCode;
                    bool m_generationQRCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEBATCHPRODUCTIONREQUEST_H_
