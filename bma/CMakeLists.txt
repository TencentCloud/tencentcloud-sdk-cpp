#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(bma_public_header
  include/tencentcloud/bma/v20221115/BmaClient.h
  include/tencentcloud/bma/v20210624/BmaClient.h
  )

set(bma_public_header_model
  include/tencentcloud/bma/v20221115/model/CreateBPFakeAPPResponse.h
  include/tencentcloud/bma/v20221115/model/DeleteBPWhiteListResponse.h
  include/tencentcloud/bma/v20221115/model/DescribeBPBrandsResponse.h
  include/tencentcloud/bma/v20221115/model/DescribeBPBrandsRequest.h
  include/tencentcloud/bma/v20221115/model/CreateBPBrandRequest.h
  include/tencentcloud/bma/v20221115/model/DescribeBPFakeURLsRequest.h
  include/tencentcloud/bma/v20221115/model/FakeAPPData.h
  include/tencentcloud/bma/v20221115/model/WhiteListData.h
  include/tencentcloud/bma/v20221115/model/TrademarkData.h
  include/tencentcloud/bma/v20221115/model/DescribeBPFakeURLsResponse.h
  include/tencentcloud/bma/v20221115/model/CreateBPFakeURLRequest.h
  include/tencentcloud/bma/v20221115/model/CreateBPFakeAPPListResponse.h
  include/tencentcloud/bma/v20221115/model/DescribeBPWhiteListsResponse.h
  include/tencentcloud/bma/v20221115/model/CreateBPFakeAPPListRequest.h
  include/tencentcloud/bma/v20221115/model/Filter.h
  include/tencentcloud/bma/v20221115/model/CreateBPWhiteListResponse.h
  include/tencentcloud/bma/v20221115/model/ServiceData.h
  include/tencentcloud/bma/v20221115/model/FakeURLData.h
  include/tencentcloud/bma/v20221115/model/DeleteBPWhiteListRequest.h
  include/tencentcloud/bma/v20221115/model/DescribeBPWhiteListsRequest.h
  include/tencentcloud/bma/v20221115/model/CreateBPFakeURLsResponse.h
  include/tencentcloud/bma/v20221115/model/DescribeBPFakeAPPListRequest.h
  include/tencentcloud/bma/v20221115/model/CreateBPFakeAPPRequest.h
  include/tencentcloud/bma/v20221115/model/BrandData.h
  include/tencentcloud/bma/v20221115/model/CreateBPBrandResponse.h
  include/tencentcloud/bma/v20221115/model/CreateBPFakeURLResponse.h
  include/tencentcloud/bma/v20221115/model/CreateBPWhiteListRequest.h
  include/tencentcloud/bma/v20221115/model/CreateBPFakeURLsRequest.h
  include/tencentcloud/bma/v20221115/model/DescribeBPFakeAPPListResponse.h
  include/tencentcloud/bma/v20210624/model/ProtectURLInfo.h
  include/tencentcloud/bma/v20210624/model/ModifyCRWhiteListRequest.h
  include/tencentcloud/bma/v20210624/model/CreateCRUserVerifyRequest.h
  include/tencentcloud/bma/v20210624/model/CreateBPFalseTicketResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRRightFileRequest.h
  include/tencentcloud/bma/v20210624/model/CreateCRRightResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRWorkResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRRightRequest.h
  include/tencentcloud/bma/v20210624/model/CreateBPOfflineTicketResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRTortRequest.h
  include/tencentcloud/bma/v20210624/model/UpdateCRWorkRequest.h
  include/tencentcloud/bma/v20210624/model/DescribeBPFakeURLsRequest.h
  include/tencentcloud/bma/v20210624/model/ModifyCRBlockStatusResponse.h
  include/tencentcloud/bma/v20210624/model/Monitor.h
  include/tencentcloud/bma/v20210624/model/ModifyCRObtainStatusRequest.h
  include/tencentcloud/bma/v20210624/model/ReportFakeURLInfo.h
  include/tencentcloud/bma/v20210624/model/DescribeCRWorkInfoRequest.h
  include/tencentcloud/bma/v20210624/model/ModifyBPOfflineAttachmentRequest.h
  include/tencentcloud/bma/v20210624/model/DescribeBPFakeURLsResponse.h
  include/tencentcloud/bma/v20210624/model/CreateBPOfflineAttachmentResponse.h
  include/tencentcloud/bma/v20210624/model/DescribeBPReportFakeURLsRequest.h
  include/tencentcloud/bma/v20210624/model/DescribeCRMonitorDetailResponse.h
  include/tencentcloud/bma/v20210624/model/MonitorTort.h
  include/tencentcloud/bma/v20210624/model/CreateBPFakeURLRequest.h
  include/tencentcloud/bma/v20210624/model/CreateBPProtectURLsResponse.h
  include/tencentcloud/bma/v20210624/model/DescribeBPProtectURLsResponse.h
  include/tencentcloud/bma/v20210624/model/DescribeCRMonitorsResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRCompanyVerifyResponse.h
  include/tencentcloud/bma/v20210624/model/CreateBPOfflineAttachmentRequest.h
  include/tencentcloud/bma/v20210624/model/CreateCRDesktopCodeResponse.h
  include/tencentcloud/bma/v20210624/model/CreateBPProtectURLsRequest.h
  include/tencentcloud/bma/v20210624/model/UpdateCRWorkResponse.h
  include/tencentcloud/bma/v20210624/model/ModifyCRBlockStatusRequest.h
  include/tencentcloud/bma/v20210624/model/ModifyCRMonitorRequest.h
  include/tencentcloud/bma/v20210624/model/CreateCRDesktopCodeRequest.h
  include/tencentcloud/bma/v20210624/model/CreateCRWorkRequest.h
  include/tencentcloud/bma/v20210624/model/DescribeBPCompanyInfoRequest.h
  include/tencentcloud/bma/v20210624/model/DescribeCRObtainDetailRequest.h
  include/tencentcloud/bma/v20210624/model/DescribeBPReportFakeURLsResponse.h
  include/tencentcloud/bma/v20210624/model/DescribeCRMonitorDetailRequest.h
  include/tencentcloud/bma/v20210624/model/Filter.h
  include/tencentcloud/bma/v20210624/model/CreateCRBlockResponse.h
  include/tencentcloud/bma/v20210624/model/ModifyCRRightStatusRequest.h
  include/tencentcloud/bma/v20210624/model/DescribeCRMonitorsRequest.h
  include/tencentcloud/bma/v20210624/model/DescribeCRWorkInfoResponse.h
  include/tencentcloud/bma/v20210624/model/DescribeCRObtainDetailResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRRightFileResponse.h
  include/tencentcloud/bma/v20210624/model/ModifyCRWhiteListResponse.h
  include/tencentcloud/bma/v20210624/model/FakeURLInfo.h
  include/tencentcloud/bma/v20210624/model/CreateBPOfflineTicketRequest.h
  include/tencentcloud/bma/v20210624/model/CreateCRUserVerifyResponse.h
  include/tencentcloud/bma/v20210624/model/BrandData.h
  include/tencentcloud/bma/v20210624/model/ModifyCRRightStatusResponse.h
  include/tencentcloud/bma/v20210624/model/DescribeBPCompanyInfoResponse.h
  include/tencentcloud/bma/v20210624/model/ModifyBPOfflineAttachmentResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRBlockRequest.h
  include/tencentcloud/bma/v20210624/model/CreateBPFakeURLResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRTortResponse.h
  include/tencentcloud/bma/v20210624/model/CreateBPFalseTicketRequest.h
  include/tencentcloud/bma/v20210624/model/ModifyCRMonitorResponse.h
  include/tencentcloud/bma/v20210624/model/File.h
  include/tencentcloud/bma/v20210624/model/DescribeBPProtectURLsRequest.h
  include/tencentcloud/bma/v20210624/model/ModifyCRObtainStatusResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRCompanyVerifyRequest.h
  )

set(bma_src
  src/v20221115/BmaClient.cpp
  src/v20210624/BmaClient.cpp
  src/v20221115/model/CreateBPFakeAPPResponse.cpp
  src/v20221115/model/DeleteBPWhiteListResponse.cpp
  src/v20221115/model/DescribeBPBrandsResponse.cpp
  src/v20221115/model/DescribeBPBrandsRequest.cpp
  src/v20221115/model/CreateBPBrandRequest.cpp
  src/v20221115/model/DescribeBPFakeURLsRequest.cpp
  src/v20221115/model/FakeAPPData.cpp
  src/v20221115/model/WhiteListData.cpp
  src/v20221115/model/TrademarkData.cpp
  src/v20221115/model/DescribeBPFakeURLsResponse.cpp
  src/v20221115/model/CreateBPFakeURLRequest.cpp
  src/v20221115/model/CreateBPFakeAPPListResponse.cpp
  src/v20221115/model/DescribeBPWhiteListsResponse.cpp
  src/v20221115/model/CreateBPFakeAPPListRequest.cpp
  src/v20221115/model/Filter.cpp
  src/v20221115/model/CreateBPWhiteListResponse.cpp
  src/v20221115/model/ServiceData.cpp
  src/v20221115/model/FakeURLData.cpp
  src/v20221115/model/DeleteBPWhiteListRequest.cpp
  src/v20221115/model/DescribeBPWhiteListsRequest.cpp
  src/v20221115/model/CreateBPFakeURLsResponse.cpp
  src/v20221115/model/DescribeBPFakeAPPListRequest.cpp
  src/v20221115/model/CreateBPFakeAPPRequest.cpp
  src/v20221115/model/BrandData.cpp
  src/v20221115/model/CreateBPBrandResponse.cpp
  src/v20221115/model/CreateBPFakeURLResponse.cpp
  src/v20221115/model/CreateBPWhiteListRequest.cpp
  src/v20221115/model/CreateBPFakeURLsRequest.cpp
  src/v20221115/model/DescribeBPFakeAPPListResponse.cpp
  src/v20210624/model/ProtectURLInfo.cpp
  src/v20210624/model/ModifyCRWhiteListRequest.cpp
  src/v20210624/model/CreateCRUserVerifyRequest.cpp
  src/v20210624/model/CreateBPFalseTicketResponse.cpp
  src/v20210624/model/CreateCRRightFileRequest.cpp
  src/v20210624/model/CreateCRRightResponse.cpp
  src/v20210624/model/CreateCRWorkResponse.cpp
  src/v20210624/model/CreateCRRightRequest.cpp
  src/v20210624/model/CreateBPOfflineTicketResponse.cpp
  src/v20210624/model/CreateCRTortRequest.cpp
  src/v20210624/model/UpdateCRWorkRequest.cpp
  src/v20210624/model/DescribeBPFakeURLsRequest.cpp
  src/v20210624/model/ModifyCRBlockStatusResponse.cpp
  src/v20210624/model/Monitor.cpp
  src/v20210624/model/ModifyCRObtainStatusRequest.cpp
  src/v20210624/model/ReportFakeURLInfo.cpp
  src/v20210624/model/DescribeCRWorkInfoRequest.cpp
  src/v20210624/model/ModifyBPOfflineAttachmentRequest.cpp
  src/v20210624/model/DescribeBPFakeURLsResponse.cpp
  src/v20210624/model/CreateBPOfflineAttachmentResponse.cpp
  src/v20210624/model/DescribeBPReportFakeURLsRequest.cpp
  src/v20210624/model/DescribeCRMonitorDetailResponse.cpp
  src/v20210624/model/MonitorTort.cpp
  src/v20210624/model/CreateBPFakeURLRequest.cpp
  src/v20210624/model/CreateBPProtectURLsResponse.cpp
  src/v20210624/model/DescribeBPProtectURLsResponse.cpp
  src/v20210624/model/DescribeCRMonitorsResponse.cpp
  src/v20210624/model/CreateCRCompanyVerifyResponse.cpp
  src/v20210624/model/CreateBPOfflineAttachmentRequest.cpp
  src/v20210624/model/CreateCRDesktopCodeResponse.cpp
  src/v20210624/model/CreateBPProtectURLsRequest.cpp
  src/v20210624/model/UpdateCRWorkResponse.cpp
  src/v20210624/model/ModifyCRBlockStatusRequest.cpp
  src/v20210624/model/ModifyCRMonitorRequest.cpp
  src/v20210624/model/CreateCRDesktopCodeRequest.cpp
  src/v20210624/model/CreateCRWorkRequest.cpp
  src/v20210624/model/DescribeBPCompanyInfoRequest.cpp
  src/v20210624/model/DescribeCRObtainDetailRequest.cpp
  src/v20210624/model/DescribeBPReportFakeURLsResponse.cpp
  src/v20210624/model/DescribeCRMonitorDetailRequest.cpp
  src/v20210624/model/Filter.cpp
  src/v20210624/model/CreateCRBlockResponse.cpp
  src/v20210624/model/ModifyCRRightStatusRequest.cpp
  src/v20210624/model/DescribeCRMonitorsRequest.cpp
  src/v20210624/model/DescribeCRWorkInfoResponse.cpp
  src/v20210624/model/DescribeCRObtainDetailResponse.cpp
  src/v20210624/model/CreateCRRightFileResponse.cpp
  src/v20210624/model/ModifyCRWhiteListResponse.cpp
  src/v20210624/model/FakeURLInfo.cpp
  src/v20210624/model/CreateBPOfflineTicketRequest.cpp
  src/v20210624/model/CreateCRUserVerifyResponse.cpp
  src/v20210624/model/BrandData.cpp
  src/v20210624/model/ModifyCRRightStatusResponse.cpp
  src/v20210624/model/DescribeBPCompanyInfoResponse.cpp
  src/v20210624/model/ModifyBPOfflineAttachmentResponse.cpp
  src/v20210624/model/CreateCRBlockRequest.cpp
  src/v20210624/model/CreateBPFakeURLResponse.cpp
  src/v20210624/model/CreateCRTortResponse.cpp
  src/v20210624/model/CreateBPFalseTicketRequest.cpp
  src/v20210624/model/ModifyCRMonitorResponse.cpp
  src/v20210624/model/File.cpp
  src/v20210624/model/DescribeBPProtectURLsRequest.cpp
  src/v20210624/model/ModifyCRObtainStatusResponse.cpp
  src/v20210624/model/CreateCRCompanyVerifyRequest.cpp
  )

set(bma_include
    include/tencentcloud/bma
  )

add_library(bma ${LIB_TYPE}
  ${bma_public_header}
  ${bma_public_header_model}
  ${bma_src})

set_target_properties(bma
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bma
  )

target_include_directories(bma
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bma
  core)

#install(FILES ${bma_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bma/v20210624)
#install(FILES ${bma_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bma/v20210624/model)
install(DIRECTORY ${bma_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bma
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
